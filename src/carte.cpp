/*
 * carte.cpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *	Permet la creation des cartes du jeu de tactik
 */
#include "carte.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

Carte::Carte() : m_valeur(0), m_type(0){

}

Carte::Carte(int valeur, int type) : m_valeur(valeur),m_type(type){

}

void monTest(){
	std::cout << "bordel";
};

std::string Carte::toString(){
	std::string type ="";

	switch(m_type){
		case 0:
			type = "avancer";
			break;
		case 1:
			type = "permuter";
			break;
		case 2:
			type = "joker";
			break;
		default:
			type = "erreur";
	}
	
	std::string retour = "carte de type " + type + " et de valeur " + std::to_string(m_valeur);
	return retour;
}
