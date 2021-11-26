/*
 * initialisation_joueur.cpp
 *
 * Les fonctions présentent dans cette partie permettent d'initialiser joueur
 * Joueur est consitué :
 * un nom
 * une couleur
 * un score définissant le nombre de pions arrivé. 1 pour 1, 2 pour 2 ...
 * des cartes
 * 4 positions
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../inc/joueur.h"

#define NB_JOUEUR 4
/*
struct Joueur init(void){
  // temp structure variable

  printf("Enter le nom : ");
  scanf("%s", player.nom);

  player.score = 0;
  printf("Score : %d ", player.score);

  player.couleur = nb;

  return player.nom, player.score, player.couleur;
}

void joueurInit(void){
	for (int i =0 ; i < NB_JOUEUR ; i++){
		int nb = i;
		init();
	}
}*/

void initJoueur(Joueur player[]){
	int nb = 0;

	do{

		player[nb].id = nb;
		printf("L'id : %d \n", player[nb].id);
		player[nb].couleur = nb;
		printf("La couleur : %d \n", player[nb].couleur);

		//char nom[30]; //pas la peine
		//printf("Le nom : %s \n", player[nb].nom);
		player[nb].score = 0;
		printf("Le score : %d \n\n", player[nb].score);

		nb += 1;


	}while(NB_JOUEUR != nb);
	//char name[30] = {0};
	/*
	for (int i = 0; i<NB_JOUEUR;i++){

		printf("Entrer le nom du joueur %d : \n ",player[i].id);

			switch(player[i].id)
			{
			case 1 :

				//fflush(stdin);
				//scanf ("%s", name);
				getchar();
				break;
			case 2 :
				//fflush(stdin);
				scanf ("%c", player[2].nom);
				break;
			case 3 :
				//fflush(stdin);
				scanf ("%c", player[3].nom);
				break;
			default :
				printf("hgsdyusg");
			}
	}*/

}

