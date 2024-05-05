#include "gamewidget.h"

gameWidget::gameWidget(QWidget *parent) : QWidget(parent)
{
    this->parent=parent;
    this->resize(800,533);
    this->setFixedSize(this->geometry().size());    //固定大小
    this->setWindowTitle("进击的僵尸");
    this->setAutoFillBackground(true);
    this->setWindowIcon(QIcon("images/zombie_icon.png"));

    QPalette palette;   //调色板
    palette.setBrush(QPalette::Background,QBrush(QPixmap("images/gameWin.png")));
    this->setPalette(palette);

    //按钮
    btnEasy=new QPushButton(this);
    btnEasy->setIcon(QIcon("images/easy.png"));
    btnEasy->setIconSize(QSize(173,119));
    btnEasy->setFlat(true);
    this->setFocusPolicy(Qt::NoFocus);

    btnCommon=new QPushButton(this);
    btnCommon->setIcon(QIcon("images/common.png"));
    btnCommon->setIconSize(QSize(173,119));
    btnCommon->setFlat(true);

    btnHard=new QPushButton(this);
    btnHard->setIcon(QIcon("images/hard.png"));
    btnHard->setIconSize(QSize(173,119));
    btnHard->setFlat(true);

    btnReturn=new QPushButton(this);
    btnReturn->setIcon(QIcon("images/return.png"));
    btnReturn->setIconSize(QSize(173,119));
    btnReturn->setFlat(true);

    //创建垂直布局
    vboxlayout=new QVBoxLayout(this);
    vboxlayout->addWidget(btnEasy);
    vboxlayout->addWidget(btnCommon);
    vboxlayout->addWidget(btnHard);
    vboxlayout->addWidget(btnReturn);
    vboxlayout->setAlignment(Qt::AlignCenter);

    //连接信号槽
    connect(btnReturn,SIGNAL(clicked()),this,SLOT(on_btnReturn_Clicked()));
    connect(btnEasy,SIGNAL(clicked()),this,SLOT(on_btnEasy_Clicked()));
}

void gameWidget::on_btnEasy_Clicked(){
    this->parent->hide();
    easyview=new EasyView;
    easyview->show();
}

void gameWidget::on_btnCommon_Clicked(){

}

void gameWidget::on_btnHard_Clicked(){

}

void gameWidget::on_btnReturn_Clicked(){
    this->hide();
}
