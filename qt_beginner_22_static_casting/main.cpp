#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

//Static cast

//The static_cast operator performs a nonpolymorphic cast.
//For example, it can be used to cast a base class pointer into a derived class pointer.

// reinterpret cast

// Unlike static_cast, but like const_cast, the reinterpret_cast expression does not compile to any CPU instructions
// (except when converting between integers and pointers or on obscure architectures where pointer representation
// depends on its type). It is purely a compile-time directive which instructs the compiler to treat expression as if
// it had the type new_type.


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
    testDrive(player1);

    car* gremlin= dynamic_cast<car*>(player1);
    if(gremlin) testDrive(gremlin);

    //up casting going from the car to the racecar
    //Static cast should work fine, this is the way to go from a base to a derived class safely.
    racecar* speedster = static_cast<racecar*>(gremlin);
    if(speedster) race(speedster);

    int* pointer = reinterpret_cast<int*>(speedster);
    qInfo() << "pointer = " << pointer;

    racecar* mycar = reinterpret_cast<racecar*>(pointer);
    qInfo() << "My cars color is: " << mycar->color;


    return a.exec();
}
