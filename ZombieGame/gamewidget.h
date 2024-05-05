#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QBrush>
#include <QIcon>
#include "easyview.h"

class gameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit gameWidget(QWidget *parent = nullptr);

private:
    QPushButton *btnEasy;
    QPushButton *btnCommon;
    QPushButton *btnHard;
    QPushButton *btnReturn;
    QVBoxLayout *vboxlayout;
    EasyView *easyview;
    QWidget *parent;

signals:

public slots:
    void on_btnEasy_Clicked();
    void on_btnCommon_Clicked();
    void on_btnHard_Clicked();
    void on_btnReturn_Clicked();
};

#endif // GAMEWIDGET_H
