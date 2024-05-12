#include <QCoreApplication>
#include <QDebug>

void test(){
    int number = 50;
    qInfo() << "Test number is at: "<< &number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 50;
    qInfo() << "Test number is at: "<< &number;


    return a.exec();
}
