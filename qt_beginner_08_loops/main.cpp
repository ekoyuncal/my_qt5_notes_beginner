#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 0;
    int max = 10;

    int i = start;


    //While Loop
    while (i < max) {
        qInfo()<< i++;
    }

    i = start;

    //Do While
    do{
        qInfo()<< "DO :"<< i ++;
    }while(i < max);

    //For loop
    i = start;
    for(i; i < max; i++){
        qInfo()<< "DO :"<< i;
    }
    for(int j = 0;j < max; j++){
        qInfo()<< "J: "<< j;
    }

    return a.exec();
}
