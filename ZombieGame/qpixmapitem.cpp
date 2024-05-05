#include "qpixmapitem.h"

QPixmapItem::QPixmapItem(const QString &fileName, QGraphicsScene *scence)
{
    pixmap.load(fileName);
    scence->addItem(this);
}

QRectF QPixmapItem::boundingRect() const
{
    return QRectF(-pixmap.width()/2,-pixmap.height()/2,pixmap.width(),pixmap.height());
}

void QPixmapItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge)
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
}
