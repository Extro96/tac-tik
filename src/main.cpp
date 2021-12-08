/*
 * main.cpp
 *
 *  Created on: 20 nov. 2020
 *      Author: lause
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"
#include "../inc/jeu.hpp"
#include "../inc/plateau.hpp"


int main(int argc, char *argv[]) {

	// On commence la personnalisation de la partie avec le nombre de joueurs
	int nbJoueur;
	Joueur ListeJoueur[8] = {}; // Initialisation d'une liste de joueurs (8 maximum)
	std::cout << "Combien de joueurs ? \n";
	std::cin >> nbJoueur;
	do{
		std::cout << "Combien de joueurs ? Attention le nombre doit etre pair et de max 8 \n";
		std::cin >> nbJoueur;
	}while((nbJoueur%2)!=0 || nbJoueur>8);

	// On créer une instance de Jeu() limité à nbJoueur et on l'initialise avec ses joueurs.
	Jeu monJeu = Jeu(nbJoueur);
	monJeu.initJeu();

	return 0;
}




