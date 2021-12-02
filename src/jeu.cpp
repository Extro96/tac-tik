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


void Jeu::initJeu(int nb_joueur)
{

	Pioche pioche;
	pioche.initPioche();

	//demande nombre de joueurs

	//creation de tous les joueurs, demander la couleur

	Joueur joueur1,joueur2;

	//prevoir une boucle ou autre pour faire chaque joueur, suivant leur nom

	debutTourDeJeu(nb_joueur, joueur1, pioche);
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
