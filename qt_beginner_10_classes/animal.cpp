#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    //When created
    this->name = name;
    qInfo() << this << name << "constructed";
}

animal::~animal()
{
    //When destroyed
    qInfo() << this << name << "deconstructed";
}

void animal::speak(QString message)
{
    qInfo()<< "Here is your message: "<< message;
}
/*
int animal::makeA()
{
    return this->weight * 2;
}
*/

void animal::test()
{

}
