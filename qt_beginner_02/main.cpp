#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Test 000";
    qInfo() << "Hello Test 000";

    return a.exec();
}
