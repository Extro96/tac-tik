/*
 * pion.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include "../inc/pion.hpp"


Pion::Pion() : m_position(0), m_intouchablePion(true){

}

Pion::Pion(int posInit){
	m_position = posInit;
	m_positionInitial = posInit;
	m_intouchablePion = true;
}

	//Retourne la position du pion
int Pion::getPosition()
{
	return m_position;
};

	//Modifie la position du pion
void Pion::modifierPosition(int newPosition)
{
	Pion::m_position = newPosition;
	m_intouchablePion = false;
};

	//Renvoi le pion a sa position initiale.
void Pion::manger()
{
	m_position = m_positionInitial;
};


