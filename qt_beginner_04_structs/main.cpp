#include <QCoreApplication>
#include <QDebug>

enum Colors {red, green, blue};

//Precusor to "classes"
struct product
{
    int weight;
    double var;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop;
    qInfo() << "Size of product" << sizeof(laptop);

    qInfo() << "Weight : "<< laptop.weight;
    qInfo() << "Variable : "<< laptop.var;
    qInfo() << "Color : "<< laptop.color;

    laptop.color = Colors::green;
    laptop.weight = 43;
    laptop.var = 32.56;

    qInfo() << "Weight : "<< laptop.weight;
    qInfo() << "Variable : "<< laptop.var;
    qInfo() << "Color : "<< laptop.color;

    return a.exec();
}
