/*
 * jeu.hpp
 *
 *  Created on: 1 déc. 2021
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

	void initJeu(int nb_joueur);

	void debutTourDeJeu(int nb_joueur, Joueur joueur_actuel, Pioche pioche_cree);

	void echangeCarte(Carte echange_joueur1, Carte echange_joueur2);

	//void nomJoueur(int nb_joueur);


private :
	int m_tour_de_jeu;
};



#endif /* INC_JEU_HPP_ */
