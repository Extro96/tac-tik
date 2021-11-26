/*
 * carte.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef CARTE_PPH_
#define CARTE_PPH_

class Carte
{

public :

	Carte(int valeur, int type); // Constructeur

private :

	int m_valeur; // c'est dans la pioche qu'on créer les cartes et qu'on leur attribue un deux ou -4
	int m_type; // 0 = avancer, 1 = permuter ou 2 = joker

};


#endif /* CARTE_PPH_ */
