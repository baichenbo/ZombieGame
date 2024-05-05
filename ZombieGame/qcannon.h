#ifndef QCANNON_H
#define QCANNON_H

#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QPixmap>
#include <QString>
#include "qpixmapitem.h"
#include <QGraphicsScene>

class QCannon : public QPixmapItem
{
public:
    QCannon(const QString &fileName, QGraphicsScene *scence);

};

#endif // QCANNON_H
