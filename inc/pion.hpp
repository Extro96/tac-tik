/*
 * pion.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 *
 *      Pion est d�fini par une position
 */

#ifndef PION_HPP_
#define PION_HPP_


class Pion
{
public :

	Pion();
	Pion(int posInit);

	int getPosition();

	void modifierPosition(int newPosition);

	void manger();

private :
	int m_position = 0;
	int m_positionInitial = 0;
	bool m_intouchablePion = true;

};


#endif /* PION_HPP_ */
