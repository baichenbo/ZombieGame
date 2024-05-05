#ifndef QBOMBING_H
#define QBOMBING_H

#include "qpixmapitem.h"
#include "qzombie.h"

class QBombing : public QPixmapItem
{
public:
    QBombing(const QString &fileName, QGraphicsScene *scence);
    void advance(int phase);    //重载；bombing消失
};

#endif // QBOMBING_H
