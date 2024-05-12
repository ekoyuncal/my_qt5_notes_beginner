#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 43.08;
    qInfo() << "Double: "<< value;

    int age = value;//Implicit conversion double to int and it shouldnt be trusted

    qInfo() << "Age: " << age;

    age = (int)value;//Casting old style
    //Explicit conversion and it should be trusted

    qInfo() << "Age: " << age;

    return a.exec();
}
