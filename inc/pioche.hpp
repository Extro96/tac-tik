/*
 * pioche.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#ifndef PIOCHE_HPP_
#define PIOCHE_HPP_

#include <string>

#include "carte.hpp"
#include "joueur.hpp"


class Pioche
{
public :

	Pioche();

	void initPioche();

	void melangeCarte();

	void distribuerCarte(int nb_joueur, Joueur joueur_actuel);

	std::string toString();

private :
	Carte m_pioche[50];
	int m_indicePioche;
	int restePioche;

};



#endif /* PIOCHE_HPP_ */
