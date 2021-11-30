/*
 * carte.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef CARTE_PPH_
#define CARTE_PPH_

#include <string>

class Carte
{

public :

	Carte();// Constructeur
	Carte(int valeur, int type);
	std::string toString();
	bool estEgal(Carte const& b) const;



private :

	int m_valeur; // c'est dans la pioche qu'on cr�er les cartes et qu'on leur attribue un deux ou -4
	int m_type; // 0 = avancer, 1 = permuter ou 2 = joker

};

bool operator==(Carte const& r_carte, Carte const& carte_joueur);

#endif /* CARTE_PPH_ */
