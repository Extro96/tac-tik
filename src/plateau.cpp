/*
 * plateau.cpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 */


#include "../inc/plateau.hpp"

#include <stdio.h>
#include <stdlib.h>

Plateau::Plateau(){
	for (int i = 0; i<32; i++){
		m_caseMaison[i] = 128 + i;
		m_caseCage[i] = 160 + i;
	}
	for(int i = 0; i<128; i++){
		m_caseJeu[i] = i;
	}
}

