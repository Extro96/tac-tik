/*
 * joueur.hpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Le joueur est défini par une couleur, des c
 *
 */

#ifndef JOUEUR_HPP_
#define JOUEUR_HPP_

#include "carte.hpp"
#include "pion.hpp"

class joueur{

	char nom[30];
	int score;
	std::string couleur;
};

//struct Joueur init(void);
//void joueurInit(void);

void initJoueur(Joueur joueur[]);

#endif /* JOUEUR_HPP_ */
