/*
 * initialisation_joueur.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include "carte.h"

typedef enum{
	ROUGE,
	VERT,
	BLEU,
	JAUNE,
	NOIR,
	BLANC
}couleur_perso;

typedef struct{
	int id;
	char nom[30];
	int score;
	couleur_perso couleur;
	//int position;
	//Carte Carte;
}Joueur;

//struct Joueur init(void);
//void joueurInit(void);

void initJoueur(Joueur joueur[]);

#endif /* JOUEUR_H_ */
