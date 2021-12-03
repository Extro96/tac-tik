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

	int nb_joueur;

	cout << "Quel est le nombre de joueur ?";

	cin >> nb_joueur ;


	//Pioche maPioche = Pioche();
	Jeu monJeu;

	/*
	std::cout << "Initialisation de la pioche: \n";

	maPioche.initPioche();

	std::cout << maPioche.toString();

	std::cout << "Et maintenant melanger : \n";

	maPioche.melangeCarte();

	std::cout << maPioche.toString();
	*/

	monJeu.initJeu(nb_joueur);

	std::cout << "Salut Nico, bonne journee a toi et a Pascale. Nathellau!!! \n";


	return 0;
}




