#ifndef QPIXMAPITEM_H
#define QPIXMAPITEM_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <QGraphicsScene>

class QPixmapItem : public QGraphicsItem
{
public:
    QPixmapItem(const QString &fileName, QGraphicsScene *scence);
    virtual QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widge);

//private:
protected:
    QPixmap pixmap;
};

#endif // QPIXMAPITEM_H
