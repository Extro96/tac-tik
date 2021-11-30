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

	Carte();
	Carte(int valeur, int type); // Constructeur
	std::string toString();



private :

	int m_valeur; // c'est dans la pioche qu'on cr�er les cartes et qu'on leur attribue un deux ou -4
	int m_type; // 0 = avancer, 1 = permuter ou 2 = joker

};

void monTest();


#endif /* CARTE_PPH_ */
