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


	Carte maNouvelCarte = Carte(5,1);

	Carte deuidme = Carte(5,1);

	if(maNouvelCarte == deuidme){
		std::cout << "ca marche";
	}else{
		std::cout << "ca marche po";
	}
	std::cout << "hola";


	return 0;
}




