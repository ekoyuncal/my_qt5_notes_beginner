#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

//Global scope

QString  animal::name = "";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    name = "Bobby";
//    qInfo() << name;

//    bool test = true;

//    if(test){
//        QString name = "Ally";
//        qInfo() << name;
//    }
//    qInfo() << name;

    animal cat(&a, "kitty");
    animal dog(&a, "dogidogi");

    qInfo() << cat.name;

    return a.exec();
}
