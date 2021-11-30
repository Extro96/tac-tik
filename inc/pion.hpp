/*
 * pion.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 *
 *      Pion est défini par une position
 */

#ifndef PION_HPP_
#define PION_HPP_


class Pion
{
public :

	Pion();

	int positionActuel();

	void modifierPosition(int newPosition);

	void init(int initPosition);

	void manger(int initPosition);

	void Depart(int depPosition);

	int m_position;

	bool m_intouchablePion;

};


#endif /* PION_HPP_ */
