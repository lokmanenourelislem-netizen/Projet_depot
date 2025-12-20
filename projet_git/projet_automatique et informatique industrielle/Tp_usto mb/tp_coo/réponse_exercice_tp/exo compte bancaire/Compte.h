#pragma once
// ce fichier contient la déclaration de la classe  compte
class Compte
{
	//déclarations des données et fonctions-membres publiques
public:
    Compte(int montant_init=0);//constructeur de la classe
    ~Compte();//destructeur
    void deposer_argents(int a);//déclaration de la méthode depot d'argent
    void retirer_argents(int b);//déclaration de la méthode retirement d'argent
    void afficher_argents();//déclaration de la méthode affichage d'argent

	//déclarations des données  privées

private:
    int m_argent;//declaration du montant actuel de type entier 
};

