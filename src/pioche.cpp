/*
 * pioche.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include "../inc/pioche.hpp"
#include "../inc/carte.hpp"

void Pioche::initPioche()
{
	int i;
	int val;
	int type;


	// Cr�ation des cartes avancer de 1 � 12
	for (i = 0; i<46; i+4){
		type = 0;
		val = 1;
		for (int j = 0; j<4; j++){
			m_pioche[i+j] = Carte(val, type);
		}
		val = val + 1;
	}

	// Cr�ation des cartes permuter
	for (i = 46; i<50; i+4){
		type = 1;
		val = 0;
		for (int j = 0; j<4; j++){
			m_pioche[i+j] = Carte(val, type);
		}
	}

	//Cr�ation des cartes joker
	m_pioche[48] = Carte(0,2);
	m_pioche[49] = Carte(0,2);

};

void melangeCarte()
{

};

void distribuerCarte()
{

};

std::string Pioche::toString(){
	std::string retour ="";
	for(int i = 0; i<50; i++){
		retour += m_pioche[i].toString() + "\n";
	}
	return retour;
};

