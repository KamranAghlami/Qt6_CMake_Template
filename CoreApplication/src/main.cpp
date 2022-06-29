#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Built using Qt v" QT_VERSION_STR;
    qInfo() << "Starting CoreApplication...";

    return a.exec();
}
