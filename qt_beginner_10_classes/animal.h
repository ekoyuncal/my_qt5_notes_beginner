#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
public:

    //Default Constructor
    explicit animal(QObject *parent = nullptr, QString name="");

    //Deconstructor
    ~animal();

    int weight;
    QString name;

    void speak(QString message);
    int makeDouble();
    void test();

signals:

};

#endif // ANIMAL_H
