/*
 * carte.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef CARTE_H_
#define CARTE_H_

typedef enum{
	UN,
	DEUX,
	TROIS,
	QUATRE, //-4
	CINQ,
	SIX,
	SEPT, //7X1
	HUIT,
	NEUF,
	DIX,
	DOUZE,
	TREIZE,
	JOKER
} carte_symbole;

typedef struct{
	int valeurCarte;
	carte_symbole symboleCarte;
}Carte;

void initPioche(Carte paquet[]);
//void afficheCarte(Carte paquet[]);
//void permute(Carte *c1,Carte *c2);
void melangeTas(Carte paquet[]);
void melangePioche(Carte paquet[],int nbMelange);

#endif /* CARTE_H_ */
