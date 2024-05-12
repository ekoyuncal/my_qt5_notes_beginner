#include <QCoreApplication>

#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"Test"<< endl;

    int input_number;

    qInfo()<< "Enter a number";
    cin>>input_number;
    qInfo()<< input_number;



    return a.exec();
}
