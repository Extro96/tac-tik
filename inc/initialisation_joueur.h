/*
 * initialisation_joueur.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef INITIALISATION_JOUEUR_H_
#define INITIALISATION_JOUEUR_H_

typedef enum Couleur couleur;
enum couleur{
	ROUGE,
	VERT,
	BLEU,
	JAUNE,
	NOIR,
	BLANC
};

struct Joueur{
	char nom[30];
	int score;
	int position;
	int nombreCarte;
};


#endif /* INITIALISATION_JOUEUR_H_ */
