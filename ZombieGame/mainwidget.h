#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QIcon>
#include <QLabel>
#include <QPushButton>
#include "gamewidget.h"
#include <QMessageBox>

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = 0);
    ~mainWidget();

private:
    QLabel *label;
    QPushButton *btnStart;
    QPushButton *btnSetting;
    QPushButton *btnHelp;
    QPushButton *btnQuit;
    gameWidget *w;

public slots:
    void on_btnStart_Clicked();
    void on_btnQuit_Clicked();
};

#endif // MAINWIDGET_H
