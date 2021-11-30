/*
 * initialisation_joueur.cpp
 *
 * Les fonctions présentent dans cette partie permettent d'initialiser joueur
 * Joueur est consitué :
 * un nom
 * une couleur
 * un score définissant le nombre de pions arrivé. 1 pour 1, 2 pour 2 ...
 * des cartes
 * 4 positions
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#include "../inc/joueur.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Joueur::Joueur() : m_id(0),m_couleur(0),m_name({}){

}

void Joueur::Joueur(int id, int couleur, char name[24])
{
	m_id = id; //util ?
	m_couleur = couleur;
	for (int i = 0 ; i<24; i++){
		m_name[i] = name[i];
	}
}

void Joueur::setId(int id){
	m_id = id;
}

int Joueur::getId(){
	return m_id;
}


void Joueur::setCouleur(int couleur){
	m_couleur = couleur;
}

int Joueur::getCouleur(){
	return m_couleur;
}

void ajouterCarte(Carte d_carte){
	Joueur::m_carte_joueur[0] = d_carte;
	for(int i = 2; i = 0 ; i--){
		Joueur::m_carte_joueur[i+1] = Joueur::m_carte_joueur[i];
	}
}

void retirerCarte(Carte r_carte){
	//carte choisie en position 0 main du joueur
	if (r_carte == Joueur::m_carte_joueur[0]){
		Joueur::m_carte_joueur[0] = {};
	}
	else
	{
		//carte choisie en position 1 main du joueur
		if (r_carte == Joueur::m_carte_joueur[1]){
				Joueur::m_carte_joueur[1] = {};
		}
		else
		{
			//carte choisie en position 2 main du joueur
			if (r_carte == Joueur::m_carte_joueur[2]){
					Joueur::m_carte_joueur[2] = {};
			}
			else
			{
				//carte choisie en position 3 main du joueur
				Joueur::m_carte_joueur[3] = {};

			}
		}
	}

}
