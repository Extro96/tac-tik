/*
 * jeu.cpp
 *
 *  Created on: 1 déc. 2021
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

using namespace std;

Jeu::Jeu() : m_tour_de_jeu(0){

}

void Jeu::initJeu(int nb_joueur)
{

	Pioche maPioche = Pioche();
	std::cout << "Initialisation de la pioche: \n";
	maPioche.initPioche();
	std::cout << maPioche.toString();
	std::cout << "Et maintenant melanger : \n";
	maPioche.melangeCarte();
	std::cout << maPioche.toString();

	Joueur listeJoueur[nb_joueur];

	//demande nombre de joueurs

	//creation de tous les joueurs, demander la couleur

	for(int i = 1; i<=nb_joueur; i++){
		cout << "Quel est le nombre de joueur";
		cout << i;
		cout << " ? " ;
		cin >> nameJoueur ;
		Joueur nameJoueur();
		listeJoueur [i-1] = nameJoueur;
		cout << " \n " ;
	}


	//Jeu::nomJoueur(nb_joueur);

	//prevoir une boucle ou autre pour faire chaque joueur, suivant leur nom
/*
	Jeu::debutTourDeJeu(nb_joueur, joueur1, pioche);
	debutTourDeJeu(nb_joueur, joueur2, pioche);

	//definir quel joueur echange avec quel joueur

	//ask quelle carte echanger

	if (nb_joueur == 2){
		// les deux joueurs s echangent une carte
		echangeCarte(echange_joueur1, echange_joueur2);
	}
	else{
		echangeCarte(echange_joueur1, echange_joueur2);
	}
*/

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
/*
void Jeu::nomJoueur(int nb_joueur){

	switch(nb_joueur){
		case 2 :
			Joueur joueur1, joueur2;
			break;
		case 4 :
			Joueur joueur1, joueur2, joueur3, joueur4;
			break;
		case 6 :
			Joueur joueur1, joueur2, joueur3, joueur4, joueur5, joueur6;
			break;
		case 8 :
			Joueur joueur1, joueur2, joueur3, joueur4, joueur5, joueur6, joueur7, joueur8;
			break;
		default :
			break;
	}


}
*/
