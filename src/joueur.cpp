/*
 * joueur.cpp
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
#include "../inc/couleur.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

Joueur::Joueur() : m_id(0),m_name("DEFAULT"),m_couleur_joueur(8){

}

/*
std::string Joueur::toString(){
	std::string couleur ="";

	switch(m_couleur_joueur){
		case 0:
			couleur = "bleu";
			break;
		case 1:
			couleur = "rouge";
			break;
		case 2:
			couleur = "jaune";
			break;
		case 3:
			couleur = "vert";
			break;
		case 4:
			couleur = "noir";
			break;
		case 5:
			couleur = "blanc";
			break;
		case 6:
			couleur = "violet";
			break;
		case 7:
			couleur = "orange";
			break;
		default:
			couleur = "Pas de couleur definie";
	}

	std::string retour = "joueur de couleur" + couleur;
	return retour;
}
*/


Joueur::Joueur(int id, std::string name, int couleur)
{
	m_id = id; //util ?
	m_couleur_joueur = couleur;
	m_name = name;
}

void Joueur::setId(int id){
	m_id = id;
}

int Joueur::getId(){
	return m_id;
}
/*
void Joueur::setCouleur(int couleur){
	m_couleur = couleur;
}

int Joueur::getCouleur(){
	return m_couleur;
}
*/
//recuperer les cartes retournees par distribuer pioche
void Joueur::ajouterCarte(Carte d_carte, int positionCarte){
	
	m_carte_joueur[positionCarte] = d_carte;
	/*
	for(int i = 2; i>=0 ; i--){
		m_carte_joueur[i+1] = m_carte_joueur[i];
	}
	m_carte_joueur[1] = m_carte_joueur[0];
	m_carte_joueur[2] = m_carte_joueur[1];
	m_carte_joueur[3] = m_carte_joueur[2];
	*/
}

void Joueur::retirerCarte(Carte r_carte){

}

Carte Joueur::choixCarte(Carte carteChoisie){
	return carteChoisie;
}

Pion Joueur::getPion(){
	return m_pion[4];
}

void Joueur::initPion(int nb_joueur){ // si 2 joueurs ...
	if (nb_joueur == 2 ){
		for(int i=0; i<4;i++){
				if (m_id == 0){
					m_pion[i] = Pion(m_id * 4 + i + 160); // changer 160 par la valeur de la premiere case de cage
				}
				else{
					m_pion[i] = Pion(m_id * 4 + i + 168); // changer 160 par la valeur de la premiere case de cage
				}
			}
	}
	else{
		for(int i=0; i<4;i++){
			m_pion[i] = Pion(m_id * 4 + i + 160); // changer 160 par la valeur de la premiere case de cage
		}
	}
	
}

void Joueur::joueurRename(){
	cout << "Nom du joueur : \n";
	cin >> m_name;

}
