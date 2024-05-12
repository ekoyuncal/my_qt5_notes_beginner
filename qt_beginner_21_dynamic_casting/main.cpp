#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "feline.h"
#include "racecar.h"

//Dynamic cast

//dynamic_cast can be used only with pointers and references to objects.
//Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class

void testDrive(car* objecto){
    objecto->drive();
    objecto->stop();
}

void race(racecar* objecto){
    objecto->gofast();

}

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    racecar* player1 = new racecar(&a);
    testDrive(player1);//it converts automatically

    //The corect way to cast
    car* obj = dynamic_cast<car*>(player1);
    if(obj) testDrive(obj);

    //wont work
    //feline* cat = dynamic_cast<racecar*>(player1);


    return a.exec();
}
