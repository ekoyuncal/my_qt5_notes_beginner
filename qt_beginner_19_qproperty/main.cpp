#include <QCoreApplication>
#include "test.h"
#include "watcher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test tester;
    watcher destination;

    QObject::connect(&tester, &test::messageChanged, &destination, &watcher::messageChanged);

    tester.setProperty("message", "HelloHello!!");
    tester.setMessage("Testingngngng");

    return a.exec();
}
