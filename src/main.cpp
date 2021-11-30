/*
 * main.cpp
 *
 *  Created on: 20 nov. 2020
 *      Author: lause
 */

#include <iostream>

#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"
#include "../inc/plateau.hpp"

int main(int argc, char *argv[]) {

	Carte maNouvelCarte = Carte(5,1);

	std::cout << maNouvelCarte.toString();

	std::cout << "hola";

	return 0;

}



