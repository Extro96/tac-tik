/*
 * jeu.cpp
 *
 *  Created on: 1 d�c. 2021
 *      Author: lause
 */

#include "../inc/jeu.hpp"
#include "../inc/plateau.hpp"
#include "../inc/Pioche.hpp"
#include "../inc/joueur.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

Jeu::Jeu() {
	m_tour_de_jeu = 0;
}

Jeu::Jeu(int nb_joueur) {
	m_tour_de_jeu = 0;
	m_nbJoueur = nb_joueur;
}

void Jeu::initJeu()
{

	// On créer la pioche de carte pour jouer
	Pioche maPioche = Pioche();
	maPioche.initPioche();

	// On mélange la pioche
	maPioche.melangeCarte();
	std::cout << maPioche.toString();

	m_listeJoueur[8] = initJoueur();	// On initialise les joueurs

}

void Jeu::debutTourDeJeu(int nb_joueur, Joueur joueur_actuel, Pioche pioche_cree){
	pioche_cree.distribuerCarte(nb_joueur, joueur_actuel);
}

void Jeu::echangeCarte(Carte echange_joueur1, Carte echange_joueur2){
		Carte temp;
		temp = echange_joueur1;
		echange_joueur1 = echange_joueur2;
		echange_joueur2 = temp;
}

// Permet d'initialiser les joueurs avec leur couleurs et leurs noms
Joueur Jeu::initJoueur(){
	int couleur;
	std::string name;
	Joueur ListeJoueur[8];
	for(int i=0; i<m_nbJoueur;i++){
		// choix de la couleur par l'utilisateur
		std::cout << "Joueur " + std::to_string(i) + " Quel couleur voulez-vous ? \n";
		std::cin >> couleur;
		//choix du nom de l'utilisateur
		std::cout << "Quel est votre nom ? \n";
		std::cin >> name;

		//Création du joueur dans la liste
		ListeJoueur[i] = Joueur(i,couleur,name);
	}

	return ListeJoueur[8];
};

void Jeu::nomJoueur(){

}
