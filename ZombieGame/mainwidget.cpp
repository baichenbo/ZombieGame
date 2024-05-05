#include "mainwidget.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(800,533);
    this->setFixedSize(this->geometry().size());    //固定大小
    this->setWindowTitle("进击的僵尸");

    this->setWindowIcon(QIcon("images/zombie_icon.png"));

    QPalette palette;   //调色板
    palette.setBrush(QPalette::Background,QBrush(QPixmap("images/mainWin.jpg")));
    this->setPalette(palette);

    //标签初始化
    this->label=new QLabel(this);
    label->setPixmap(QPixmap("images/logo.png"));

    //按钮
    btnStart=new QPushButton(this);
    btnStart->setIcon(QIcon("images/start.png"));
    btnStart->setIconSize(QSize(220,56));
    btnStart->setFlat(true);
    this->setFocusPolicy(Qt::NoFocus);

    btnSetting=new QPushButton(this);
    btnSetting->setIcon(QIcon("images/setting.png"));
    btnSetting->setIconSize(QSize(220,56));
    btnSetting->setFlat(true);

    btnHelp=new QPushButton(this);
    btnHelp->setIcon(QIcon("images/help.png"));
    btnHelp->setIconSize(QSize(220,56));
    btnHelp->setFlat(true);

    btnQuit=new QPushButton(this);
    btnQuit->setIcon(QIcon("images/quit.png"));
    btnQuit->setIconSize(QSize(220,56));
    btnQuit->setFlat(true);

    //创建垂直布局
   /* vboxlayout=new QVBoxLayout(this);
    vboxlayout->addWidget(label);
    vboxlayout->addWidget(btnStart);
    vboxlayout->addWidget(btnSetting);
    vboxlayout->addWidget(btnHelp);
    vboxlayout->addWidget(btnQuit);
    vboxlayout->setAlignment(Qt::AlignCenter);*/

    //布局
    label->move(90.5,5);
    btnStart->move(0,150);
    btnSetting->move(0,220);
    btnHelp->move(0,290);
    btnQuit->move(0,360);

    w=new gameWidget(this);
    w->hide();
    //连接信号与槽
    connect(btnStart,SIGNAL(clicked()),this,SLOT(on_btnStart_Clicked()));
    connect(btnQuit,SIGNAL(clicked()),this,SLOT(on_btnQuit_Clicked()));
}

mainWidget::~mainWidget()
{

}

void mainWidget::on_btnStart_Clicked(){
    //this->hide();
    w->show();
}

void mainWidget::on_btnQuit_Clicked(){
    if(QMessageBox::Yes == QMessageBox::question(this,"提示","您确定退出游戏吗？",QMessageBox::Yes|QMessageBox::No)){
        this->close();
    }
}

