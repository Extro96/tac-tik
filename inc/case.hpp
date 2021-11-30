/*
 * case.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#ifndef CASE_HPP_
#define CASE_HPP_


class Case
{

public :

	Case();
	Carte(int valeurCase, int typeCase) : m_valeurCase(valeur),m_typeCase(type);

	void setDispo(bool dispoCase);
	bool getDispo();

private :
	bool m_dispoCase; //dispo case du plateau, true case libre, false cas non libre
	int m_valeurCase; //valeur sur le plateau
	int m_typeCase; //case depart, maison, cage


};


#endif /* CASE_HPP_ */
