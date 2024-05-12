#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Array
    int ages[4] = {1, 3, 5, 6}; //Zero based Array

    qInfo() << ages;//Address
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];


    array<int, 4> cars;

    cars[0] = 88;
    cars[1] = 52;
    cars[2] = 44;
    cars[3] = 76;

    cars[99] = 777;//Undefined behaviour
    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];

    qInfo() << cars[4];

    qInfo() << cars[99];




    return a.exec();
}
