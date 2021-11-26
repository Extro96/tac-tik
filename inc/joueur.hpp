/*
 * initialisation_joueur.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Le joueur est défini par une couleur, des cartes, des pions et un coéquipier ou non
 *
 */

#ifndef JOUEUR_HPP_
#define JOUEUR_HPP_

#include "carte.hpp"
#include "pion.hpp"

#include <string>

class Joueur{

public :

	void initJoueur(Joueur);

	void modifJoueur(Joueur);

	Pion id_pion;
	Carte carte_joueur;

private :

	int couleur; //chaque couleur correspond a un numero
};



#endif /* JOUEUR_HPP_ */
