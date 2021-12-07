/*
 * initialisation_joueur.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Le joueur est d�fini par une couleur, des cartes, des pions et un co�quipier ou non
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

	Joueur(int id, int couleur, std::string name);

	void modifJoueur(Joueur);

	int recupId();

	void setCouleur(int couleur);
	int getCouleur();

	void setId(int id);
	int getId();

	void ajouterCarte(Carte d_carte);
	void retirerCarte(Carte r_carte);

	Carte choixCarte(Carte carteChoisie);

	Pion getPion();

	void initPion(int nb_joueur);

	std::string toString();

	void joueurRename();

private :

	int m_couleur; //chaque couleur correspond a un numero
	int m_id; // permet de definir l'ordre de passage
	Pion m_pion[4];
	Carte m_carte_joueur[4];
	std::string m_name;
};


#endif /* JOUEUR_HPP_ */
