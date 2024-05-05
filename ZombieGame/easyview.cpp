#include "easyview.h"

EasyView::EasyView()
{
    setViewportUpdateMode(QGraphicsView::FullViewportUpdate);   //消除移动时重影残影
    this->resize(800,533);
    this->setFixedSize(this->geometry().size());    //固定大小
    this->setWindowTitle("进击的僵尸");
    this->setAutoFillBackground(true);
    this->setWindowIcon(QIcon("images/zombie_icon.png"));

    this->setBackgroundBrush(QBrush(QPixmap("images/Easy/playBg.png")));

    easyscence=new QGraphicsScene;
    easyscence->setSceneRect(0,0,this->width()-2,this->height()-2);
    this->setScene(easyscence);

    this->setMouseTracking(true);   //启动鼠标事件

    //大炮
    cannon=new QCannon("images/Easy/cannon.png",easyscence);
    cannon->setPos(this->width()/2,this->height());
    easyscence->addItem(cannon);

    //僵尸
    zombie1=new QZombie("images/Easy/zombie1.png",easyscence);
    //zombie1->setPos(0,50);
   // scene->addItem(zombie1);

    zombie2=new QZombie("images/Easy/zombie2.png",easyscence);
    //zombie2->setPos(0,150);
  //  scene->addItem(zombie2);

    zombie3=new QZombie("images/Easy/zombie3.png",easyscence);
   // zombie3->setPos(0,250);
  //  scene->addItem(zombie3);

    zombie4=new QZombie("images/Easy/zombie4.png",easyscence);
    //zombie4->setPos(0,350);
  //  scene->addItem(zombie4);

    //定时器，僵尸移动
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),easyscence,SLOT(advance()));
    timer->start(100);
}

//void EasyView::resizeEvent(QResizeEvent *event){    //重载拉伸窗口
//    this->setBackgroundBrush(QBrush(QPixmap("images/Easy/playBg.png").scaled(event->size())));
//}

void EasyView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint p;
    p=event->pos();
    //画线
    QLineF linef(this->width()/2,this->height(),p.x(),p.y());

    cannon->setRotation(90-linef.angle());
}

void EasyView::mousePressEvent(QMouseEvent *event)
{
    QPoint p=event->pos();

    QLineF linef(this->width()/2,this->height(),p.x(),p.y());

    QBullet *bullet=new QBullet("images/Easy/ball.png",easyscence,linef.angle());

}
