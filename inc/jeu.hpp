/*
 * jeu.hpp
 *
 *  Created on: 1 d�c. 2021
 *      Author: lause
 */

#ifndef INC_JEU_HPP_
#define INC_JEU_HPP_

#include "joueur.hpp"
#include "pioche.hpp"

class Jeu
{
public :

	Jeu();
	Jeu(int nb_joueur);

	void initJeu();

	void debutTourDeJeu(int nb_joueur, Joueur joueur_actuel, Pioche pioche_cree);

	void echangeCarte(Carte echange_joueur1, Carte echange_joueur2);

	Joueur initJoueur();

	Joueur distribuJeu(Pioche pioche);


private :
	int m_tour_de_jeu;
	int m_nbJoueur;
	Joueur m_listeJoueur[8];
};



#endif /* INC_JEU_HPP_ */
