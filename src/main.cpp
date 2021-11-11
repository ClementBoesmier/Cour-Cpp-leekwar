/**
 * @file main.cpp
 * @author Clément Boesmier (clement@jo85.com)
 * @brief fichier principal du programme
 * @version 0.1
 * @date 2021-11-11
 *
 * @copyright Copyright (c) 2021
 *
 * Ceci est un programme dans le but d'aprendre
 * la programmation orienter objet
 */
#include <Arduino.h>
#include "Type.h"
#include "Statistique.h"
#include "Arme.h"
#include "Pistolet.h"


Arme arme;

Pistolet pistolet;

void setup() {
  randomSeed(millis());
  Serial.begin(115200);
  Serial.println("start :");

  arme.tir();

  pistolet.tir();

  arme = pistolet;

  arme.tir();

}

void loop() {
  // put your main code here, to run repeatedly:
}