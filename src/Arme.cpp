#include "Arme.h"
#include <Arduino.h>

Arme::Arme() {}

int Arme::getCout() {
    return this->cout;
}

int Arme::getDegats() {
    return random(this->degats[0], this->degats[1]);
}

Portee Arme::getPortee() {
    return this->portee;
}

int Arme::tir() {
    Serial.println(this->name);
    Serial.print("\tCout: ");
    Serial.println(this->cout);
    Serial.print("\tPortee: ");
    Serial.print(this->portee.min);
    Serial.print(" - ");
    Serial.println(this->portee.max);
    Serial.print("\tType: ");
    Serial.println(this->portee.type);
    Serial.print("\tDegat: ");
    Serial.println(this->getDegats());
    Serial.println();
    return 0;
}