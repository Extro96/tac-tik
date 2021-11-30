/*
 * pion.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include "../inc/pion.hpp"


Pion::Pion() : m_position(0), m_intouchablePion(false){

}

	//Retourne la position du pion
int Pion::positionActuel()
{
	return m_position;
};

	//Modifie la position du pion
void Pion::modifierPosition(int newPosition)
{
	Pion::m_position = newPosition;
	m_intouchablePion = false;
};

	//Initialise la position du pion en début de jeu
void Pion::init(int initPosition)
{
	Pion::m_position = initPosition;
};

	//position lorsque le pion est mange
void Pion::manger(int initPosition)
{
	Pion::init(initPosition);
};

	//position sur la case depart
void Pion::Depart(int caseDepart){
	Pion::m_position = caseDepart;
	m_intouchablePion = true;
}

