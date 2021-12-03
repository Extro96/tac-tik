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


	Pioche maPioche = Pioche();

	std::cout << "Et maintenant melanger : \n";

	maPioche.initPioche();

	std::cout << maPioche.toString();

	std::cout << "Et maintenant melanger : \n";

	maPioche.melangeCarte();

	std::cout << maPioche.toString();

	std::cout << "hola";


	return 0;
}




