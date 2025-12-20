//ce fichier contient la définition de la classe

#include "Compte.h"// déclaration de la classe
#include <iostream>//pour les entrées-sorties

//constructeur compte
Compte::Compte(int montant_init)
{
    m_argent = montant_init;
}
///*********************************************
//destructeur du compte
Compte::~Compte()
{

}
///*********************************************
//définition de la méthode depot d'argent
void Compte::deposer_argents(int a)
{
    m_argent += a;
}
///*********************************************
//définition de la méthode retirement d'argent
void Compte::retirer_argents(int b)
{
    m_argent -= b;
}
///*********************************************

//définition de la méthode affichage du montant actuel
void Compte::afficher_argents()
{
    std::cout<<"montant actuel  : "<<m_argent<<std::endl;
}
