/*
 * pioche.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include <time.h>

#include <iostream>
#include "../inc/pioche.hpp"
#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"

Pioche::Pioche() : m_indicePioche(0),restePioche(50 - m_indicePioche) {

}


void Pioche::initPioche()
{
	int i;
	int val = 1;
	int type = 0;

	// Creation des cartes avancer de 1 a 12
	for (i = 0; i<44; i=i+4){

		for (int j = 0; j<4; j++){
			m_pioche[j+i] = Carte(val, type);
			/*
			std::cout << "m_pioche[";
			std::cout << i+j;
			std::cout <<"]  :  ";
			std::cout << m_pioche[i+j].toString();
			std::cout <<"\n";
			*/
		}
		val = val + 1;
		//std::cout << i;
	}

	// Cr�ation des cartes permuter
	for (i = 44; i<48; i++){
		type = 1;
		val = 0;
		m_pioche[i] = Carte(val, type);
		/*
		std::cout << "m_pioche[";
		std::cout << i;
		std::cout <<"]  :  ";
		std::cout << m_pioche[i].toString();
		std::cout <<"\n";
*/
	}

	//Cr�ation des cartes joker
	m_pioche[48] = Carte(0,2);
	m_pioche[49] = Carte(0,2);

}

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

}

// Ici il faut changer joueur_actuel par listeJoueur
void Pioche::distribuerCarte(int nb_joueur, Joueur joueur_actuel)
{

	int cartepioche = joueur_actuel.getId();


	if (restePioche > 4*nb_joueur)
	{

		//distribue les cartes aux joueurs
		for (int i = 0; i < 4; i++){
			joueur_actuel.ajouterCarte(m_pioche[cartepioche],i);
			cartepioche = cartepioche+nb_joueur;

			m_indicePioche++;

		}
	}
	else
	{
		//melange les cartes de 0 a indiceCarte
		//distribue restecart et apr�s on reprend la pioche � 0 pour distribuer
		//indiceCarte � 0 et on r�incremente
		Carte temp_pioche[50] = {};
		Pioche::melangeCarte();

		for(int i = 0; i<m_indicePioche;i++){
			temp_pioche[i] = m_pioche[50 - m_indicePioche + i];
		}
		for(int i = 0; i<50 - m_indicePioche;i++){
			temp_pioche[i+m_indicePioche] = m_pioche[i];
		}

		for(int i = 0; i<50; i++){
			m_pioche[i] = temp_pioche[i];
		}

		//distribue les cartes aux joueurs
		for (int i = 0; i < 4; i++){
			joueur_actuel.ajouterCarte(m_pioche[cartepioche],i);
			cartepioche = cartepioche+nb_joueur;

			m_indicePioche++;

		}

	}

}

std::string Pioche::toString(){
	std::string retour ="";
	for(int i = 0; i<50; i++){
		retour += m_pioche[i].toString() + "\n";
	}
	return retour;
}


