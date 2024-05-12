#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Variables
    bool isOn= false;
    int age = 44;
    double height = 6.92;

    const int age2 = 32;//can not change

    //Enums

    enum Color {red, green, blue};
    enum Color2 {red2 = 100, green2 = 56, blue2 = 8123};

    Color mycolor = Color::green;
    qInfo()<< "Green Code: " << mycolor;

    Color2 mycolor2 = Color2::green2;
    qInfo()<< "Green Code: " << mycolor2;

    qInfo()<< "is it on " << isOn;

    qInfo()<< "Age" << age;
    qInfo()<< "Height" << height;

    return a.exec();
}
