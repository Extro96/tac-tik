/*
 * main.cpp
 *
 *  Created on: 20 nov. 2020
 *      Author: lause
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../inc/carte.hpp"
#include "../inc/joueur.hpp"
#include "../inc/plateau.hpp"

#define NB_JOUEUR 4
#define NB_CARTES (4*12+2)
#define MAX_LIMIT 20

int main(int argc, char *argv[]) {

	//demander le nombre de joueur =>condition le nombre pair et supérieur ou égal à deux




/*
	// definir le nombre de carte :
	Carte paquet[NB_CARTES];
	initPioche(paquet);

	int nbMelange = 4;
	melangePioche(paquet,nbMelange);
	for (int i = 0; i<NB_CARTES ; i++){
		//printf(" Symbole carte %d : et valeur carte %d : case %d \n",paquet[i].symboleCarte,paquet[i].valeurCarte,i);
	}

*/
	//nombre de joueur dans les jeux
	//Joueur player[NB_JOUEUR];
	//initJoueur(player);
	char tableau[NB_JOUEUR] = {"LAurence"}; //{"Laurence","Nathan","Aurore","Maman"};
	//char str[MAX_LIMIT];
	for (int i = 0 ; i < NB_JOUEUR ; i++){
		printf("hello");
		fgets(tableau[i],MAX_LIMIT,stdin);
		//printf("tapoter : %s",tableau);
		//scanf("tableau : %s\n",&tableau[i]);
		//getchar();
	}
	//tableau[0] = "Laurence";
	//tableau[1] = "Nathan";
	//tableau[2] = "Aurore";
	//tableau[3] = "Maman";
	printf("%s",tableau[0]);

	//joueurInit();
	//for (int i = 0; i < NB_JOUEUR; i++) {
	    //printf("joueur n°%d\n", (i+1));

	    //getInit();
	    //joueur[i].couleur = i;
	    //printf("Couleur : %d ", joueur.couleur);
	  //}

	//int nbrCase = NOMBRE_DE_JOUEUR*4;
	//int plateau[nbrCase] = {0};

	return 0;

}



