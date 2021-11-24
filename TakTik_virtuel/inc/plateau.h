/*
 * plateau.h
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_

typedef struct CasePlateau CasePlateau;
struct CasePlateau{
	int caseMaison;
	int caseJeu;
	int caseCage;
};

int plateauJeu(struct CasePlateau, int plateau);

#endif /* PLATEAU_H_ */
