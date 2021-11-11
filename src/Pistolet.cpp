#include "Pistolet.h"
#include "Portee.h"
#include <Arduino.h>


Pistolet::Pistolet() :Arme() {
    this->name = "Pistolet";
    Portee porteePistolet;
    porteePistolet.min = 1;
    porteePistolet.max = 7;
    porteePistolet.type = NORMAL;

    this->portee = porteePistolet;
    this->cout = 3;
}