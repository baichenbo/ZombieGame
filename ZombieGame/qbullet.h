#ifndef QBULLET_H
#define QBULLET_H

#include "qpixmapitem.h"
#include <QtGui>
#include "qbombing.h"
#include <QGraphicsScene>

class QBullet : public QPixmapItem
{
public:
    QBullet(const QString &fileName, QGraphicsScene *scence, qreal angle);

    void advance(int phase);    //重载
    void doColliding();     //碰撞处理
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge);  //重载（bombing特效）

private:
    QGraphicsScene *scence;
};

#endif // QBULLET_H
