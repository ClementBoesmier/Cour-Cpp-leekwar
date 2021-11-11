#ifndef PISTOLET_H
#define PISTOLET_H

#include "Arme.h"
#include "Portee.h"
#include <Arduino.h>




class Pistolet : public Arme {


    int degats[2] = { 15,20 };
public:
    Pistolet();
};


#endif