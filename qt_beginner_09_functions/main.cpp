#include <QCoreApplication>
#include <QDebug>

#include <iostream>
using namespace std;

void test(int number){
    qInfo()<<"Function Test" << number;
}
void test(double number){
    qInfo()<<"Function Test double" << number;
}

int summ(int num1, int num2){
    return num1 + num2;
}
int calc(int offset, int age){

    if(offset == 0){
        qFatal("Offset can not be zero");
    }
    return offset * age;
}
int catyear(int age){
    return calc(9, age);
}

//Pass by value
void testVal(int i){
    i = i * 10;
    qInfo()<<"I " <<i;
}
void testRef(int &i){
    i = i * 10;
    qInfo()<<"I " <<i;
}

struct laptop
{
    int weight;

    double asKilogram(){
        return weight* 0.453592;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(32.4);
    qInfo() << summ(5, 8);

    int x = 5;

    testVal(x);
    qInfo()<<"X: "<< x;
    testRef(x);
    qInfo()<<"X: "<< x;

    laptop notebook1;
    notebook1.weight = 55;

    qInfo()<< "Pounds: "<< notebook1.weight;
    qInfo()<< "Kilograms: "<< notebook1.asKilogram();

    return a.exec();
}
