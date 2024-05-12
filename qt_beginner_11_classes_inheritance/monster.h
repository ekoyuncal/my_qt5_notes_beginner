#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include "feline.h"
#include "canine.h"

class monster : public feline, canine//You cant inherit 2 class
{
    Q_OBJECT
public:
    explicit monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
