#include "lion.h"

lion::lion(QObject *parent) : feline(parent)
{

}

void lion::speak()
{
    qInfo() << "ROAR!!!!!!!!!!!!!!";

    feline::speak()
;}
