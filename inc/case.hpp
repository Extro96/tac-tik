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
	Case(int valeurCase, int typeCase, bool dispoCase, int couleurCase);

	void setDispo(bool dispoCase);
	bool getDispo();

	void setValeur(int valeurCase);
	int getValeur();

	void setType(int typeCase);
	int getType();

	void setCouleur(int couleurCase);
	int getCouleur();

private :
	bool m_dispoCase; //dispo case du plateau, true case libre, false cas non libre
	int m_valeurCase; //valeur sur le plateau
	int m_typeCase; //case depart, maison, cage
	int m_couleurCase; //couleur de la case

};


#endif /* CASE_HPP_ */
