/**
 * @file Arme.h
 * @author Clement Boesmier (Clement@jo85.com)
 * @brief fichier contenant la déclaration de la classe Arme
 * @version 0.1
 * @date 2021-11-11
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef ARME_H
#define ARME_H
#include "Portee.h"
#include <Arduino.h>


 /**
  * @class Arme Arme.h "Arme"
  * @brief Classe abstraite représentant une arme
  *
  * Elle contient les informations générique d'une arme
  */
class Arme {
protected:
    String name = "Arme";
    /**
     * @brief Cout d'utilisation de l'arme
     * cout d'utilisation de l'arme en nombre de Point d'Action
     */
    int cout;
    /**
     * @brief degat de l'arme
     * Tableau a 2 case réprentent les dégats d'un tire de l'arme
     * valeur aléatoire entre les 2 cases
     */
    int degats[2];
    /**
     * @brief Portée de l'arme
     * Structure conenant la proté du tir de l'arme
     */
    Portee portee;
public:
    /**
     * @brief Contructeur de la classe Arme
     *
     * @param[in] cout      Cout d'utilisation de l'arme
     * @param[in] degats    tableau contenant les dégats min et max de l'arme
     * @param[in] portee    structure contenant la portée de l'arme
     */
    Arme();

    /**
     * @brief retourne le cout d'utilisation de l'arme
     *
     * @return int retourne le cout d'utilisation de l'arme en nombre de Point d'Action
     */
    int getCout();
    /**
     * @brief retourne le dégat de l'arme
     *
     * @return int retourne le dégat de l'arme (valeur aléatoire entre le min et le max)
     */
    int getDegats();
    /**
     * @brief retourne la portée de l'arme
     *
     * @return Portee retourne la portée de l'arme
     */
    Portee getPortee();
    /**
     * @brief utilise l'arme sur une cible donnée
     * @param[in] cible    cible sur laquelle l'arme est utilisée
     *
     * @return int retourne le cout d'utilisation de l'arme
     */
    int tir();
};
#endif