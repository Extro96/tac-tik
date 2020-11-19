/*
 * carte.h
 *
 *  Created on: 19 nov. 2020
 *      Author: lause
 */

#ifndef CARTE_H_
#define CARTE_H_

// enumeration des symboles d'un jeu de cartes classique
typedef enum Symbole Symbole;
enum Symbole{
	AS, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF, DIX, VALET, LAURENCE, NICOLAS
};

// enumeration des couleurs d'un jeu de cartes classique
typedef enum Couleur Couleur;
enum Couleur{
	COEUR, PIQUE, CARREAU, TREFLE
};

class Carte
{
	Symbole Symbole;
	Couleur Couleur;
	int get(); //ce n'est pa sun int dixit Nico
};


#endif /* CARTE_H_ */
