#include "qbullet.h"

QBullet::QBullet(const QString &fileName, QGraphicsScene *scence, qreal angle):QPixmapItem(fileName,scence)
{
    this->scence=scence;
    qreal dx,dy;
    qreal rad;//弧度
    rad=angle*3.14/180;
    dx=88*cos(rad);

    dy=88*sin(rad);
    this->setPos(scence->width()/2+dx,scence->height()-dy);
    this->setRotation(90-angle);
}

void QBullet::advance(int phase)
{
    if(mapToScene(0,0).x()<=0||mapToScene(0,0).x()>=800||mapToScene(0,0).y()<=0){
        delete this;
    }
    else
        this->setPos(mapToScene(0,-15));
}

void QBullet::doColliding()
{
    QBombing *bombing=new QBombing("images/Easy/bombing.png",this->scence);
    bombing->setPos(mapToScene(0,0));
    delete this;
}

void QBullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge)
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
    if(this->collidingItems().count()>0){    //碰撞检测
        doColliding();
    }
}
