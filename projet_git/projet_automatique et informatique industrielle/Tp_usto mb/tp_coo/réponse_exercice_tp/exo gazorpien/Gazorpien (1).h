#include <iostream>
#include <string>

#include <ctime>
#include <cstdlib>
//creation de la classe gazorpien
class Gazorpien
{
	//declaration des membres publics
public:
    Gazorpien(std::string nom_Gazoop);
    Gazorpien();
    ~Gazorpien();
    //void affichage(void);
    ///interaction avec le gazorpien
    int quel_age_a_tu(void);
    std::string comment_tu_t_appel(void);
    ///***
    Gazorpien union_(Gazorpien&, Gazorpien&); /// l'effet ascenseur !!! ou la camera est tjr present!!


    std::string get_sexe(void);
    std::string get_nom(void);
    int get_gulps(void);
//declaration des membres et des méthodes privé
protected:
    void evolution_age(void);//méthode défini l'age du gazorpien en glups
    void Gazoop_nom(char);////méthode défini le nom du gazorpien
    ///***
    //****
    int m_gulps;
    std::string m_nom;
    std::string m_sexe;

};


std::ostream& operator<<(std::ostream& flux, Gazorpien& a);










