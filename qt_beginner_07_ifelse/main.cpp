#include <QCoreApplication>

#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 45;

    //Flow Control

    if(age > 15){
        qInfo()<<"You are over 15";

    }
    else if(age < 12){
        qInfo()<<"You are a child";
    }
    else{
        qInfo()<<"You are between 12-17";
    }

    //Ternary Operator

    age > 0 && age < 110 ? qInfo("You entered a valid age") : qFatal("You did not enter a valid age");


    //Switch
    switch (age) {

        case 0:
            qInfo("It is not valid");
            break;

        default:
            qInfo("Nothing special");
            break;
    }

    return a.exec();
}
