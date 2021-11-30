/*
 * initialisation_joueur.cpp
 *
 * Les fonctions pr�sentent dans cette partie permettent d'initialiser joueur
 * Joueur est consitu� :
 * un nom
 * une couleur
 * un score d�finissant le nombre de pions arriv�. 1 pour 1, 2 pour 2 ...
 * des cartes
 * 4 positions
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#include "../inc/joueur.hpp"
#include "../inc/carte.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Joueur::Joueur() : m_id(0),m_couleur(0),m_name("DEFAULT"){

}

Joueur::Joueur(int id, int couleur, std::string name)
{
	m_id = id; //util ?
	m_couleur = couleur;
	m_name = name;
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

void Joueur::ajouterCarte(Carte d_carte){
	m_carte_joueur[0] = d_carte;
	for(int i = 2; i = 0 ; i--){
		m_carte_joueur[i+1] = m_carte_joueur[i];
	}
}

void Joueur::retirerCarte(Carte r_carte){
	//carte choisie en position 0 main du joueur
	if (r_carte == m_carte_joueur[0]){
		m_carte_joueur[0] = {};
	}
	else
	{
		//carte choisie en position 1 main du joueur
		if (r_carte == m_carte_joueur[1]){
				m_carte_joueur[1] = {};
		}
		else
		{
			//carte choisie en position 2 main du joueur
			if (r_carte == m_carte_joueur[2]){
					m_carte_joueur[2] = {};
			}
			else
			{
				//carte choisie en position 3 main du joueur
				m_carte_joueur[3] = {};

			}
		}
	}

}
