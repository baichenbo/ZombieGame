#include "mainwidget.h"
#include <QApplication>
#include "mainwidget.h"
#include "gamewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainWidget w;
    //gameWidge w;
    w.show();

    return a.exec();
}
