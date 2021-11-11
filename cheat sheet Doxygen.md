# Doxygen





commentaire des fichiers dans leur globalité : (au début du fichier)

```cpp
/**
 * @file main.cpp //nom du fichier
 * @brief ceci est un cour commentaire pour dire simplement se qu'est notre programme
 *        elle peut être fait sur plusieur ligne
 * @author Clement Boesmier //auteur du code
 * @version 1.0 starting projet //version du program (mon peut mettre des commentaire en plus)
 * @date 10/11/2021 //date de création du fichier (oui sa se met a la main)
 *
 * ceci est un commentaire plus complet pour la documentation du début d'un fichier
 * on peut l'utiliser partout pour décrir plus dans le détaille les différent élément du code et leur utilisation
 */

```

commentaire  d'une fonction

```cpp
/**
 * @brief ceci est un cour commentaire qui décris se que fait la fonction\n
 *        a noté que les commentraire prenne en conte le **markdown** et les retour a la ligne
 *
 * @param[in] car    une description d'a quoi sert le paramètre (type pas obligatoire car donnée dans la fonction)
 * @param[out] str    //les crochet sont pas obligatoire mais permet de dire si c'est en entrée ou en sortie
 *
 * @return int    fonction qui renvoit un entier
 */
```



```cpp
/**
 * @struct nomStructure maStructure.cpp "nom du fichier afficher"
 * @brief structure qui représent les case d'un damier
 * 
 * ceci est un strucure de donnée qui remprésent l'ensemble des cases d'un damier
 */

```

```cpp
/**
 * @enum nomEnumération
 * @brief représente une case d'un damier
 *
 * c'est donc une case de damier qui est soit blanche soit noire
 */
enum case{
    NOIRE, /*!< case noire */
    BLANCHE /*!< case blanche */
};
```



```cpp
/**
 * @class nomDeClass maClass.h "ma Class"
 * 
 */
```

[Initiation à Doxygen pour C et C++.](https://franckh.developpez.com/tutoriels/outils/doxygen/)






















