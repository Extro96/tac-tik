/*
 * case.cpp
 *
 *  Created on: 30 nov. 2021
 *      Author: lause
 */

#include "../inc/case.hpp"
#include "../inc/pion.hpp"

#include <stdio.h>
#include <stdlib.h>

Case::Case() : m_valeurCase(0), m_typeCase(0), m_dispoCase(true)
{

}

void Case::setDispo(bool dispoCase){
	m_dispoCase = dispoCase;
}

bool Case::getDispo(){
	return m_dispoCase;
}
/*
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
}*/
