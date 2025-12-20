#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <sstream>
#include <ctime>//ce fichier d'en téte contient les définitions de fonction pour manipuler les informations de date et d'heure
#define MAX_VALID_YR 9999 //
#define MIN_VALID_YR 1800

//creation de la classe Date
class Date
{
public:
    Date(unsigned int jour, unsigned int mois, unsigned int annee);
    Date();
    ~Date();
    //---
    //void afficher(); //on peut utiliser l operateur<< pour afficher la date enregistree
    void demain(); ///afficher la date de lendemain
    //---
    void setToCurrentDate(void); /// la date est la date actuel d'aujourd'hui
    //---
	//méthodes pour manipuler la date
    void changerDate(unsigned int jour, unsigned int mois, unsigned int annee);
    void changerJours(unsigned int j);
    void changerMois(unsigned int m);
    void changerAnnees(unsigned int y);
    //---
    std::string get_date(void);
    //---
private:
    bool isLeap(int year); ///utilise pour identifier les annees bissextiles
    bool isValideDate(int d, int m, int y); ///verifier si la date entree est valide
    //---
    //attribut
    unsigned int m_jours;
    unsigned int m_mois;
    unsigned int m_annees;

};

///****
std::ostream& operator<<(std::ostream&, Date&);


#endif // DATE_H
