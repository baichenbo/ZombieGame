#include "qbombing.h"

QBombing::QBombing(const QString &fileName, QGraphicsScene *scence):QPixmapItem(fileName,scence)
{

}

void QBombing::advance(int phase)
{
    if(this->collidingItems().count()>0){   //僵尸消亡
        QList<QGraphicsItem *> list=this->collidingItems();
        QList<QGraphicsItem *>::iterator i;
        QZombie *zombie;
        i=list.begin();
        while(i!=list.end()){
            zombie=(QZombie*)(*i);
            //delete zombie;
            zombie->zombieDeath();
            i++;
        }
    }
    this->hide();
    delete this;
}
