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

	int positionActuel();

	void modifierPosition(int newPosition);

	void init();

	void manger();

	int position;

};


#endif /* PION_HPP_ */
