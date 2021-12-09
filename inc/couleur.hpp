/*
 * couleur.hpp
 *
 * Created on: 8 dec. 2021
 *      Author: lause
 * 
 * Permet retourner les différentes couleurs, et de dire si elles sont dispo ou non
 *
 */

#ifndef COULEUR_HPP_
#define COULEUR_HPP_

#include <string>

class Couleur{
public : 

    Couleur();
    Couleur(int couleur);

    bool dispoCouleur();
    void setDispo(bool dispo);

    void setCouleur(int couleur);
    int getCouleur();

    std::string toString();

private : 
    int m_couleur;
    std::string m_couleur_string; 
    bool m_dispo;
    
};

#endif /* COULEUR_HPP_ */