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
	int caseMaison = 0;
	int caseJeu = 1;
	int caseCage = 2;
};

int plateauJeu(struct CasePlateau, int plateau);

#endif /* PLATEAU_H_ */
