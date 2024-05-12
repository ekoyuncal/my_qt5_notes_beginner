#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombox;
    station* channels[3];

    //create some stations
    channels[0] = new station(&boombox, 95, "Anadolu Rock");
    channels[1] = new station(&boombox, 191, "New Rock");
    channels[2] = new station(&boombox, 101, "Turkuler");

    //Qt::QueuedConnection = used when u work with threads
    boombox.connect(&boombox, &radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);

    do{
        qInfo() << "Enter on, off, test or quit:";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON"){
            qInfo() << "Turning radio on";
            for(int i =0; i < 3; i++){
                station* channel = channels[i];
                boombox.connect(channel, &station::send, &boombox, &radio::listen);
            }
            qInfo() << "radio is on";
        }

        if(line == "OFF"){
            qInfo() << "Turning radio off";
            for(int i =0; i < 3; i++){
                station* channel = channels[i];
                boombox.disconnect(channel, &station::send, &boombox, &radio::listen);
            }
            qInfo() << "radio is off";
        }

        if(line == "TEST"){
            qInfo() << "Testing";
            for(int i =0; i < 3; i++){
                station* channel = channels[i];
                channel->broadcast("Broadcasting live!! ");
            }
            qInfo() << "Testing complete";
        }
        if(line == "QUIT"){
            qInfo() << "Quitting";
            emit boombox.quit();
            break;
        }



    }while(1);

    return a.exec();
}
