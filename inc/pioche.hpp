/*
 * pioche.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#ifndef PIOCHE_HPP_
#define PIOCHE_HPP_

#include <iostream>
#include <list>

#include "../inc/carte.hpp"


class Pioche
{
public :

	Pioche();

	void initPioche();

	void melangeCarte();

	void distribuerCarte();

private :
	Carte m_pioche[50] = {};

};



#endif /* PIOCHE_HPP_ */
