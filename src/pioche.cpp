/*
 * pioche.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include "../inc/pioche.hpp"
#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"


void Pioche::initPioche()
{
	int i;
	int val;
	int type;


	// Création des cartes avancer de 1 à 12
	for (i = 0; i<46; i+4){
		type = 0;
		val = 1;
		for (int j = 0; j<4; j++){
			m_pioche[i+j] = Carte(val, type);
		}
		val = val + 1;
	}

	// Création des cartes permuter
	for (i = 46; i<50; i+4){
		type = 1;
		val = 0;
		for (int j = 0; j<4; j++){
			m_pioche[i+j] = Carte(val, type);
		}
	}

	//Création des cartes joker
	m_pioche[48] = Carte(0,2);
	m_pioche[49] = Carte(0,2);

};

void Pioche::melangeCarte()
{
	Carte tempCarte = Carte(0,0); //Carte temporaire

	for (int i = 0; i < restePioche; i++){
		int random = rand % restePioche;
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
		//mélange les cartes de 0 à indiceCarte
		//distribue restecart et après on reprend la pioche à 0 pour distribuer
		//indiceCarte à 0 et on réincrémente
	}








};


