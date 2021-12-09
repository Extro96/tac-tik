/*
 * jeu.cpp
 *
 *  Created on: 1 d�c. 2021
 *      Author: lause
 */

#include "../inc/jeu.hpp"
#include "../inc/plateau.hpp"
#include "../inc/pioche.hpp"
#include "../inc/joueur.hpp"
#include "../inc/couleur.hpp"

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

	// On distribue
	m_listeJoueur[8] = distribuJeu(maPioche);

}

void Jeu::debutTourDeJeu(int nb_joueur, Joueur joueur_actuel, Pioche pioche_cree){
	pioche_cree.distribuerCarte(nb_joueur, joueur_actuel);
}

void Jeu::echangeCarte(Carte echange_joueur1, Carte echange_joueur2){ // TODO a revoir, ça ne marche pas. Il n'y a aucune interaction avec les objets joueur.
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
	Couleur colorus;
	Couleur listeCouleur[8] = {Couleur(0),Couleur(1),Couleur(2),Couleur(3),Couleur(4),Couleur(5),Couleur(6),Couleur(7)}; // Liste toutes couleurs disponibles pour le joueur (probablement une façon plus sexy de faire)
	for(int i=0; i<m_nbJoueur;i++){
		// Choix du nom de l'utilisateur
		bool flag = true;
		do {
			if (flag){
				std::cout << "Quel est votre nom ? \n";
				flag = false;
			}
			else{
				std::cout << "Attention a ne pas mettre un nom trop long, quel nom voulez-vous ? \n";
			}
			std::cin >> name;
		}while(name.size()>30); //name n'a pas de limite de taille, pas vu dans joueur non plus

		// Choix de la couleur par l'utilisateur
		std::cout << "Joueur " + name;

		// Choix de la couleur de l'utilisateur
		flag = true; // reset du flag pour la prochaine boucle
		do {
			if (flag){
				std::cout << " Quel couleur voulez-vous ? \n";
				flag = false;
			}
			else{
				std::cout << "Cette couleur est déjà prise, veuillez en choisir une autre ? \n";
			}
			std::cin >> couleur;
		}while(listeCouleur[couleur].dispoCouleur() == false);// verifie si la couleur est dispo
		listeCouleur[couleur].setDispo(false); // La couleur choisi devient indisponible pour les autres joueurs

		//Création du joueur dans la liste
		ListeJoueur[i] = Joueur(i,name,listeCouleur[couleur]);
		ListeJoueur[i].initPion(m_nbJoueur); // Initialisation des pions du joueurs par rapport à son id (cases de départs)
	}
	return ListeJoueur[8];
};

Joueur Jeu::distribuJeu(Pioche pioche){
	Joueur ListeJoueur[8];
	for (int i = 0 ; i<m_nbJoueur; i++){
		pioche.distribuerCarte(m_nbJoueur, ListeJoueur[i]);
	}
	return ListeJoueur[8];
}
/*
 * jeu.cpp
 *
 *  Created on: 1 d�c. 2021
 *      Author: lause
 

#include "../inc/jeu.hpp"
#include "../inc/plateau.hpp"
#include "../inc/pioche.hpp"
#include "../inc/joueur.hpp"
#include "../inc/couleur.hpp"

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

	// On distribue
	//m_listeJoueur[8] = distribuJeu(maPioche);
	

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
	Couleur colorus;
	for(int i=0; i<m_nbJoueur;i++){
		//choix du nom de l'utilisateur
		//std::cout << "Quel est votre nom ? \n";
		//std::cin >> name;
		bool flag = true;
		bool dispoCouleurListe = true;
		do {
			if (flag){
				std::cout << " Quel est votre nom ? \n";
				flag = false;
			}
			else{
				std::cout << "Attention a ne pas mettre un nom trop long, quel nom voulez-vous ? \n";
			}
			std::cin >> name;

			//std::cout << name.size();
		}while(name.size()>30); //name n'a pas de limite de taille, pas vu dans joueur non plus

		// choix de la couleur par l'utilisateur
		std::cout << "Joueur " + std::to_string(i) ;
		//std::cin >> couleur;
		flag = true; // reset du flag pour la prochaine boucle
		
		do {
			if (flag == true){
				std::cout << " Quel couleur voulez-vous ? \n";
				flag = false;
			}
			else{
				if ((couleur<0||couleur>8)){
					std::cout << "Veuillez choisir une valeur comprise entre 0 et 7 : \n";
				}
				if (dispoCouleurListe == false ){
					std::cout << "Cette couleur est déjà prise, veuillez en choisir une autre ? \n";
				}
			}
			std::cin >> couleur;
			colorus.setCouleur(couleur);
			for (int j = 0; j<i ; j++){
				if(couleur == ListeJoueur[j].getCouleur()){
					dispoCouleurListe = false;
				}
			}
		}while(dispoCouleurListe == false || (couleur<0||couleur>8));// verifie si la couleur est dispo

		//Création du joueur dans la liste
		//colorus = Couleur(couleur, Couleur().dispoCouleur(couleur));
		ListeJoueur[i] = Joueur(i,name,colorus);
		ListeJoueur[i].initPion(m_nbJoueur); // Initialisation des pions du joueurs par rapport à son id (cases de départs)
	}
	return ListeJoueur[8];
};

Joueur Jeu::distribuJeu(Pioche pioche){
	Joueur ListeJoueur[8];
	for (int i = 0 ; i<m_nbJoueur; i++){
		pioche.distribuerCarte(m_nbJoueur, ListeJoueur[i]);
	}
	return ListeJoueur[8];
}*/