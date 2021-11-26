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

	int recupId();

	Pion id_pion;
	Carte carte_joueur;

private :

	int m_couleur; //chaque couleur correspond a un numero
	int m_id; // permt de définri l'ordre de passage
};



#endif /* JOUEUR_HPP_ */
