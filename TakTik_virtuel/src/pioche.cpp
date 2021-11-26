/*
 * pioche.cpp
 *
 *  Created on: 25 nov. 2021
 *      Author: lause
 */

#include "../inc/pioche.hpp"
#include "../inc/carte.hpp"

void initPioche(Carte paquet[]){
	int iteration = 0;
	int caseTableau = 0;
	do{
		for (int i = 0 ; i<4; i++){
			paquet[caseTableau].symboleCarte = iteration;
			//printf(" symbole carte %d : Case %d \n",paquet[caseTableau].symboleCarte,caseTableau);
			caseTableau += 1;
		}

		iteration += 1;
		//printf(" valeur %d : \n",iteration);
	}while(iteration != 12); // tant que different! pas ==

	paquet[48].symboleCarte = 12;
	//printf(" symbole carte %d : Case 48 \n",paquet[48].symboleCarte);
	paquet[49].symboleCarte = 12;
	//printf(" symbole carte %d : Case 49 \n",paquet[49].symboleCarte);

	for (int i = 0; i<NB_CARTES; i++){

		switch(paquet[i].symboleCarte)
		{
		case 0:
			paquet[i].valeurCarte = 1;
			//printf(" valeur carte %d : case 0 \n",paquet[i].valeurCarte);
			break;
		case 1:
			paquet[i].valeurCarte = 2;
			//printf(" valeur carte %d : case 1 \n",paquet[i].valeurCarte);
			break;
		case 2:
			paquet[i].valeurCarte = 3;
			//printf(" valeur carte %d : case 2 \n",paquet[i].valeurCarte);
			break;
		case 3:
			paquet[i].valeurCarte= -4;
			//printf(" valeur carte %d : case 3 \n",paquet[i].valeurCarte);
			break;
		case 4:
			paquet[i].valeurCarte = 5;
			//printf(" valeur carte %d : case 4 \n",paquet[i].valeurCarte);
			break;
		case 5:
			paquet[i].valeurCarte = 6;
			//printf(" valeur carte %d : case 5 \n",paquet[i].valeurCarte);
			break;
		case 6:
			paquet[i].valeurCarte = 7; //a revoir pour faire un 7X1
			//printf(" valeur carte %dX1 : case 7 \n",paquet[i].valeurCarte);
			break;
		case 7:
			paquet[i].valeurCarte = 8;
			//printf(" valeur carte %d : case 8 \n",paquet[i].valeurCarte);
			break;
		case 8:
			paquet[i].valeurCarte = 9;
			//printf(" valeur carte %d : case 9 \n",paquet[i].valeurCarte);
			break;
		case 9:
			paquet[i].valeurCarte = 10;
			//printf(" valeur carte %d : case 10 \n",paquet[i].valeurCarte);
			break;
		case 10:
			paquet[i].valeurCarte = 12;
			//printf(" valeur carte %d : case 12 \n",paquet[i].valeurCarte);
			break;
		default :
			paquet[i].valeurCarte = 13; // JOKER
			//printf(" valeur carte %d : case 14 \n",paquet[i].valeurCarte);

		}

	}
}

