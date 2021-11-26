/*
 * carte.cpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *	Permet la creation des cartes du jeu de tactik
 */
#include "../inc/carte.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Carte::Carte(int valeur, int type)
{
	m_valeur = valeur;
	m_type = type;
};
