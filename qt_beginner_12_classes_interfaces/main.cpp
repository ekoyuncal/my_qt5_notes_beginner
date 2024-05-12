#include <QCoreApplication>
#include <QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance Kitchen5000;

    qInfo() << "Can cook: "<< Kitchen5000.cook();
    qInfo() << "Can grill: "<< Kitchen5000.grill();
    qInfo() << "Can freeze: "<< Kitchen5000.freeze();

    return a.exec();
}
