#include <QCoreApplication>
#include <QDebug>

#include <iostream>
using namespace std;

#include "animal.h"

void makeAnimals(QObject* parent){
    animal cattyz(parent,"mrs.meowmeow");
    animal patty(parent,"mrs.meowmeow2");

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat;
    animal dog;

    cat.speak("meow");
    dog.speak("haw_haw");

    animal catty(&a,"mrs.meowmeow");

    makeAnimals(&a);

    return a.exec();
}
