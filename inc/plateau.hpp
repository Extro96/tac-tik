/*
 * plateau.hpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Objet du Plateau avec les différents types de case
 *      Les cases cage qui sont les 4 cases où les pions se trouvent avant d'être joués
 *      Les cases Départ, case de sortie de chaque pion, propre à chaque joueur, toutes les 16 cases
 *      A leur sortie de la case cage, le pion est intouchable sur cette case.
 *      Les cases jeu sont les 15 cases entre chaque case départ
 *      Les cases maison, il y a en 4 par joueur, c'est l'arrivée des pions
 *      Dans cette zone, le pion est intouchable, le nombre pour y accéder doit être exact
 *      sinon retour au case de jeu, il recommence un tour
 *
 *      NOMBRE_DE_JOUEUR = Y
 *      si Y > 4 (le nombre de joueur doit être un chiffre pair)
 *      1 à Y x 16 correspond aux caseJeu
 *      (Y x 16) + 1 à ((Y x 16) + 1) + (4 x Y) correspond aux caseMaison
 *      (((Y x 16) + 1) + (4 x Y)) + 1 à ((((Y x 16) + 1) + (4 x Y)) + 1) + (4 x Y) correspond aux caseCage
 *      sinon
 *      1 à 64 correspond aux caseJeu
 *      65 à 81 correspond aux caseMaison
 *      82 à 108 correspond aux caseCage
 *
 *
 *		Ce nombre désigne l'entier plateau
 *
 *
 */

#ifndef PLATEAU_HPP_
#define PLATEAU_HPP_

class CasePlateau
{
public :

	void definirCase(int caseMaison[],int caseJeu[],int caseCage[])
	{

	};

	int caseMaison[5];
	int caseJeu[5];
	int caseCage[5];
};

#endif /* PLATEAU_HPP_ */
