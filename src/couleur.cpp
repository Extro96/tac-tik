/*
 * couleur.cpp
 *
 *
 *  Created on: 8 dec. 2021
 *      Author: lause
 */


#include "../inc/couleur.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

Couleur::Couleur() : m_couleur(8), m_couleur_string("no color"), m_dispo(true){
}

Couleur::Couleur(int couleur, bool dispo){
	m_couleur = couleur;
	m_dispo = dispo;
}

std::string Couleur::toString(){
	std::string couleur ="";

	switch(m_couleur){
		case 0:
			couleur = "bleu";
			break;
		case 1:
			couleur = "rouge";
			break;
		case 2:
			couleur = "jaune";
			break;
		case 3:
			couleur = "vert";
			break;
		case 4:
			couleur = "noir";
			break;
		case 5:
			couleur = "blanc";
			break;
		case 6:
			couleur = "violet";
			break;
		case 7:
			couleur = "orange";
			break;
		default:
			couleur = "erreur";
	}

	std::string retour = "joueur de couleur" + couleur;
	return retour;
}

bool Couleur::dispoCouleur(int couleur){
    m_couleur = couleur;
    if (m_couleur == (0||1||2||3||4||5||6||7) && m_dispo == true){
		m_dispo = false;
        return m_dispo;
    }
	else{
		return m_dispo;
	}
}

void Couleur::setCouleur(int couleur){
	m_couleur = couleur;
}
	    
int Couleur::getCouleur(){
	return m_couleur;
}