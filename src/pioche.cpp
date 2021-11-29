/*
 * pioche.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include <time.h>

#include "../inc/pioche.hpp"
#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"


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

void Pioche::melangeCarte()
{

	// initialize random seed:
  	srand (time(NULL));

	Carte tempCarte = Carte(0,0); //Carte temporaire

	for (int i = 0; i < restePioche; i++){
		int random = rand() % restePioche;
		tempCarte = m_pioche[random];
		m_pioche[random] = m_pioche[i];
	}

};

void Pioche::distribuerCarte(int nb_joueur)
{

	if (restePioche > 4*nb_joueur)
	{

		//distribue les cartes aux joueurs
		for (int i = 0; i < nb_joueur*4; i++){
			for (int j = 0; j < nb_joueur; j++){

				if (m_indicePioche < 50)
				{
					//telle carte va a telle joueur

					m_indicePioche++;
				}

			}
		}
	}
	else
	{
		//m�lange les cartes de 0 � indiceCarte
		//distribue restecart et apr�s on reprend la pioche � 0 pour distribuer
		//indiceCarte � 0 et on r�incr�mente
	}
};

std::string Pioche::toString(){
	std::string retour ="";
	for(int i = 0; i<50; i++){
		retour += m_pioche[i].toString() + "\n";
	}
	return retour;
};


