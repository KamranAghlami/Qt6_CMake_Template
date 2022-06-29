#include <QApplication>
#include <QDebug>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qInfo() << "Built using Qt v" QT_VERSION_STR;
    qInfo() << "Starting WidgetsApplication...";

    MainWindow w;
    w.show();

    return a.exec();
}
