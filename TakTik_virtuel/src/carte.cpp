/*
 * carte.cpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *Permet la creation des cartes du jeu de tactik
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../inc/carte.h"

#define NB_JOUEUR 4
#define NB_CARTES (4*12+2)



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
		case 11:
			paquet[i].valeurCarte = 13;
			//printf(" valeur carte %d : case 13 \n",paquet[i].valeurCarte);
			break;
		default :
			paquet[i].valeurCarte = 14; // JOKER
			//printf(" valeur carte %d : case 14 \n",paquet[i].valeurCarte);

		}

	}
}
/*
void afficheCarte(Carte paquet[]){
	char *vcarte[]={"1","2","3","-4","5","6","7x1","8","9","10","12","JOKER"};
	printf(" %s ",vcarte[paquet.symboleCarte]);
}

void permute(Carte *c1,Carte *c2)
{
    Carte aide;
    aide=*c1;
    *c1=*c2;
    *c2=aide;
    printf("ICI");
}
*/
//melange les cartes une fois
void melangeTas(Carte paquet[])
{
	int k = 1;
	Carte c1[NB_CARTES];
	Carte c2[NB_CARTES];

	//initialisation des valeurs des tableaux à 0
	for(int i = 0; i<NB_CARTES ; i++){
		c2[i].symboleCarte = 0;
		c1[i].symboleCarte = 0;
		c2[i].valeurCarte = 0;
		c1[i].valeurCarte = 0 ;
	}

	//intercalage des valeurs de paquet une case sur 2. De meme pour C1
	for (int i = 0; i < NB_CARTES/2; i++){
		c2[i*2].symboleCarte = paquet[i].symboleCarte;
		c2[i*2].valeurCarte = paquet[i].valeurCarte;
		/*
		printf("Paquet : ");
		printf(" Symbole carte %d : et valeur carte %d : case %d \n",paquet[i].symboleCarte,paquet[i].valeurCarte,i);
		printf("C2 :");
		printf(" Symbole carte %d : et valeur carte %d : case %d \n\n",c2[2*i].symboleCarte,c2[2*i].valeurCarte,2*i);
		*/
	}

    for(int i=NB_CARTES/2;i<NB_CARTES;i++)
    {
    	c1[k].symboleCarte = paquet[i].symboleCarte;
    	c1[k].valeurCarte = paquet[i].valeurCarte;
    	/*
    	printf("paquet : ");
    	printf(" Symbole carte %d : et valeur carte %d : case %d \n",paquet[i].symboleCarte,paquet[i].valeurCarte,i);
    	printf("C1 :");
    	printf(" Symbole carte %d : et valeur carte %d : case %d \n\n",c1[k].symboleCarte,c1[k].valeurCarte,k);
    	 */
    	k +=2;
    }


    //on ajoute les deux tableaux et tada on a paquet!
    for (int i = 0; i < NB_CARTES ; i++){
    	c2[i].symboleCarte += c1[i].symboleCarte;
    	c2[i].valeurCarte += c1[i].valeurCarte;

    	//printf(" Symbole carte %d : et valeur carte %d : case %d \n",paquet[i].symboleCarte,paquet[i].valeurCarte,i);
    	//printf(" Symbole carte %d : et valeur carte %d : case %d \n",c2[i].symboleCarte,c2[i].valeurCarte,i);

    }

    for(int i= 0; i<NB_CARTES;i++){
    	paquet[i].symboleCarte = c2[i].symboleCarte;
    	paquet[i].valeurCarte = c2[i].valeurCarte;
    	//printf(" Symbole carte %d : et valeur carte %d : case %d \n",paquet[i].symboleCarte,paquet[i].valeurCarte,i);
    }
}


//melange nbMelange
void melangePioche(Carte paquet[],int nbMelange){
	int nbMel = 1;
	do {
		//printf ("%d \n",nbMel);
		melangeTas(paquet);

		nbMel += 1;
	}
	while(nbMelange != nbMel);

}

