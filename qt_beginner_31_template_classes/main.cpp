#include <QCoreApplication>
#include <QDebug>

template<typename T>
class test
{
public:
    T add(T value1, T value2) { return value1 + value2; }

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test<int> intCalc;
    qInfo() << intCalc.add(1,4);

    test<double> doubleCalc;
    qInfo() << doubleCalc.add(1.09,0.075);

    test<QString> stringCalc;
    qInfo() << stringCalc.add("Hello ", "World");

    return a.exec();
}
