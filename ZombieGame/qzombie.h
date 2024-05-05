#ifndef QZOMBIE_H
#define QZOMBIE_H

#include "qpixmapitem.h"
#include <QGraphicsScene>

class QZombie : public QPixmapItem
{
public:
    QZombie(const QString &fileName, QGraphicsScene *scence);

    void advance(int phase);    //重载

//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge);  //重载
    void zombieDeath();
};

#endif // QZOMBIE_H
