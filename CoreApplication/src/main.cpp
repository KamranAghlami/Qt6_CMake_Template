#include <QCoreApplication>
#include <QDebug>

#include "Qt6_config.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Built using Qt v" QT_VERSION;
    qInfo() << "Starting CoreApplication...";

    return a.exec();
}
