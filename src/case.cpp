/*
 * case.cpp
 *
 *  Created on: 30 nov. 2021
 *      Author: lause
 */

#include "../inc/case.hpp"

#include <stdio.h>
#include <stdlib.h>

Case::Case() : m_valeurCase(0), m_typeCase(0), m_dispoCase(true), m_couleurCase(0)
{

}

Case::Case(int valeurCase, int typeCase, bool dispoCase, int couleurCase)
{
	m_valeurCase = valeurCase;
	m_typeCase = typeCase;
	m_dispoCase = dispoCase;
	m_couleurCase = couleurCase;
}

void Case::setDispo(bool dispoCase){
	m_dispoCase = dispoCase;
}

bool Case::getDispo(){
	return m_dispoCase;
}

void Case::setValeur(int valeurCase){
	m_valeurCase = valeurCase;
}

int Case::getValeur(){
	return m_valeurCase;
}

void Case::setType(int typeCase){
	m_typeCase = typeCase;
}

int Case::getType(){
	return m_typeCase;
}

void Case::setCouleur(int couleurCase){
	m_couleurCase = couleurCase;
}

int Case::getCouleur(){
	return m_couleurCase;
}
