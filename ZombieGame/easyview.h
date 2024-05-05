#ifndef EASYVIEW_H
#define EASYVIEW_H

#include <QGraphicsView>
#include <QGraphicsItem>
#include <QIcon>
#include <QGraphicsScene>
#include <QResizeEvent>
#include "qcannon.h"
#include "qzombie.h"
#include <QTimer>
#include <QPoint>
#include <QLineF>
#include "qbullet.h"

class EasyView : public QGraphicsView
{
public:
    EasyView();
//    void resizeEvent(QResizeEvent *event);  //重载拉伸窗口
    void mouseMoveEvent(QMouseEvent *event);    //重写鼠标移动事件
    void mousePressEvent(QMouseEvent *event);   //重载鼠标按下事件（发射炮弹）
private:
    QGraphicsScene *easyscence;
    QCannon *cannon;
    QZombie *zombie1;
    QZombie *zombie2;
    QZombie *zombie3;
    QZombie *zombie4;

    QTimer *timer;
};

#endif // EASYVIEW_H
