#include <QCoreApplication>
#include <QDebug>

void test(QString name){
    qInfo() << "Size: "<< name.length();
}
void testPtr(QString* name){
    qInfo() << "Size: "<< name->length();
}

void display(QString* value){
    qInfo()<< "The pointer: "<< value;
    qInfo()<< "The object: "<< &value << "address of the pointer";
    qInfo()<< "The data: "<< *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Emir";
    test(name);
    testPtr(&name);

    display(&name);

    QString* nameptr = new QString("HelloWsup"); //We should  delete always after we use
    qInfo() << "nameptr_length: "<< nameptr->length();
    qInfo() << "nameptr_length: "<< (*nameptr).length();
    qInfo() << "nameptr: "<< nameptr;

    display(nameptr);
    delete nameptr; // = 0;
    display(nameptr);//It crashes

    return a.exec();
}
