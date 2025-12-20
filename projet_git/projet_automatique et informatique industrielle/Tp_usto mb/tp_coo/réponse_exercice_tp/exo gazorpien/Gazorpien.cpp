#include "Gazorpien.h"
#include <iostream>
#include <string>

#include <ctime>
#include <cstdlib>
using namespace std;

Gazorpien::Gazorpien()
{
    m_gulps = 1;
}
Gazorpien::Gazorpien(string nom)
{
    m_gulps = 1;
    m_nom = nom;
    switch(toupper(nom.at(0)))
    {
    case 'T' :
        m_sexe = "Truc";//gazorpien  Truc
        break;
    case 'B':
        m_sexe = "Bidule";//gazorpien  Bidule
        break;
    case 'M':
        m_sexe = "Machin";//gazorpien  Machin
        break;
    }
}
///********************************
Gazorpien::~Gazorpien(){}
///********************************
void Gazorpien::evolution_age(void){m_gulps++;}
///********************************

//méthode d'affichage du nom du Gazorpien
void Gazorpien::affichage(void)
{
    cout<< m_nom << "  gulps :" << m_gulps;
}
///********************************
int Gazorpien::quel_age_a_tu(void)
{
    cout << "j'ai " << m_gulps << " gulps ."<<endl;//affichage du nombre de gulps
    this->evolution_age();
    return m_gulps;
}
///********************************
string Gazorpien::comment_tu_t_appel(void)
{
    cout << "je m'appel " << m_nom << " ."<<endl;//affichage du nom du gazorpien
    this->evolution_age();
    return m_nom;
}
///********************************
string Gazorpien::get_sexe(void)
{return m_sexe;}
///********************************
std::string Gazorpien::get_nom(void)
{
    return m_nom;
}
///********************************
int Gazorpien::get_gulps(void)
{
    return m_gulps;
}
///********************************
Gazorpien Gazorpien::union_(Gazorpien& a, Gazorpien& b)
{
    Gazorpien c;
    if(m_sexe == a.get_sexe())
    {
        c.Gazoop_nom(m_sexe.at(0));
    }
    else if(m_sexe == b.get_sexe())
    {
        c.Gazoop_nom(m_sexe.at(0));
    }
    else if( a.get_sexe() == b.get_sexe())
    {
        c.Gazoop_nom(a.get_sexe().at(0));
    }
    else
    {
        c.Gazoop_nom('T');

    }
    return c;
}
///********************************

void Gazorpien::Gazoop_nom(char p)
{
    char b;
    m_nom = p;
    for(int i(0); i<4 ; i++)
    {
        b = 65+(rand()%26);
        m_nom += b;
    }
    m_nom += "OO";
    switch(toupper(p))
    {
    case 'T' :
        m_sexe = "Truc";
        break;
    case 'B':
        m_sexe = "Bidule";
        break;
    case 'M':
        m_sexe = "Machin";
        break;
    }
}
///********************************

std::ostream& operator<<(std::ostream& flux, Gazorpien& a)
{
    flux <<"\n" << a.get_nom() << "    : "<< a.get_sexe() <<" °" << a.get_gulps()<< "  .\n";
    return flux;
}
///********************************


