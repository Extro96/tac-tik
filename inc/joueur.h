/*
 * joueur.h
 *
 *  Created on: 19 nov. 2020
 *      Author: lause
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

/* idee de laulau mais trop complique :''(
typedef enum Id Id;
enum Id Id{
	BANQUE = 0,
	JOUEUR1,JOUEUR2,JOUEUR3,JOUEUR4
};

*/

class Joueur{
	//Attributs
private:
	int Id;
	Carte Cartes;
	int Cagnotte;

	//Methodes
public:
	void Piocher(Tas,Cartes);
	int calculScoreCarte(Cartes);
	int getCagnotte();
};


#endif /* JOUEUR_H_ */
