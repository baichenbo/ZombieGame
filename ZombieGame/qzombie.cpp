#include "qzombie.h"

QZombie::QZombie(const QString &fileName, QGraphicsScene *scence):QPixmapItem(fileName, scence)
{
    setPos(-100,100+rand()%400);
}

void QZombie::advance(int phase)
{

    if(mapToScene(0,0).y()<=0||mapToScene(0,0).x()>=800){
        setPos(-130,100+qrand()%300);
    }
    this->setPos(mapToScene(qrand()%10,-(qrand()%3)));
}

void QZombie::zombieDeath()
{
    setPos(-100,100+qrand()%300);
}

//void QZombie::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge)
//{
//    char fileName[50]="0";
//    static int i=1;
//    if(i == 5)
//        i=1;
//    sprintf(fileName,"images/Easy/zombie%d.png",i++);
//    pixmap.load(fileName);
//    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
//}
