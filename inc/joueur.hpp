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

	Joueur();

	Joueur(int id, int couleur, char name[24]);

	void modifJoueur(Joueur);

	int recupId();

	void setCouleur(int couleur);
	int getCouleur();

	void setId(int id);
	int getId();

	void ajouterCarte(Carte d_carte);
	void retirerCarte(Carte r_carte);


private :

	int m_couleur; //chaque couleur correspond a un numero
	int m_id; // permet de definir l'ordre de passage
	Pion m_pion[4];
	Carte m_carte_joueur[4];
	char m_name[24];
};



#endif /* JOUEUR_HPP_ */
