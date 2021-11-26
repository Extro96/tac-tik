/*
 * carte.cpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *Permet la creation des cartes du jeu de tactik
 */
#include "../inc/carte.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define NB_JOUEUR 4
#define NB_CARTES (4*12+2)




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

