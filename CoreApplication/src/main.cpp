#include <stdio.h>

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    qInfo() << "Starting event loop...";

    return app.exec();
}