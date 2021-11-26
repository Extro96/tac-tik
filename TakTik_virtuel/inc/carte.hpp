/*
 * carte.hpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Le jeu se compose de différents types de cartes ayant des fonctions différentes :
 *      soit avancer
 *      soit permuter
 *      soit les deux
 *
 *
 */

#ifndef CARTE_HPP_
#define CARTE_HPP_

typedef enum{
	UN, 	//avancer ou démarrer
	DEUX,
	TROIS,
	QUATRE, //-4
	CINQ,
	SIX,
	SEPT, //7X1
	HUIT,
	NEUF,
	DIX,	//avancer ou démarrer
	DOUZE,
	JOKER,
	PERMUTER
} carte_symbole;

typedef struct{
	int valeurCarte;
	carte_symbole symboleCarte;
}Carte;

#endif /* CARTE_HPP_ */
