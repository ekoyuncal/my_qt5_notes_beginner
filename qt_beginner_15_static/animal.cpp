#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    animal::name = name;

    qInfo() << "name changed in: "<< this << "="<< animal::name;
}
