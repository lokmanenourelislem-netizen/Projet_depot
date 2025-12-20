#include "Complex.h"
#include <cmath>
#include <iostream>


Complex::Complex(float Re, float Img)//constructeur
{
    m_Re = Re;
    m_Img = Img;
}
///*********************************************************

Complex::~Complex(){}//destructeur
///*********************************************************

float Complex::calcule_module(void)//définition de la méthode du calcul du module
{
    return sqrtf(powf(m_Re, 2)+powf(m_Img, 2));
}
///*********************************************************

float Complex::calcule_phase(void)//définition de la méthode du calcul de la phase
{
    return atanf(m_Re/m_Img);
}
///*********************************************************

void Complex::ecriture_algebriq(void)//définition de la méthode  d'écriture algébrique 
{
    std::cout << m_Re << " + i("<< m_Img<<")"<<std::endl;
}
///*********************************************************

void Complex::ecriture_exponentiel(void)//définition de la méthode  d'écriture exponentiel
{
    std::cout << this->calcule_module()<<"*exp("<<this->calcule_phase()<<")"<<std::endl;
}
///*********************************************************

float Complex::get_Reel(){return m_Re;}
float Complex::get_Img(){return m_Img;}
float Complex::get_module(){return this->calcule_module();}
float Complex::get_phase(){return this->calcule_phase();}
///***
void Complex::set_Reel(float Re){m_Re = Re;}
void Complex::set_Img(float Img){m_Img = Img;}
void Complex::set_module_Phase(float Module, float Phase)
{
    m_Re = Module*cosf(Phase);
    m_Img = Module*sinf(Phase);
}

///******************************  Operators  *************************
Complex Complex::operator+(Complex& a)//méthode de l'addition entre les deux nombre complexe
{
     Complex b(m_Re+a.get_Reel(), m_Img+a.get_Img());
     return b;
}
///****************************
Complex Complex::operator-(Complex& a)//méthode de la soustraction entre les deux nombre complexe
{
    Complex b(m_Re-a.get_Reel(), m_Img-a.get_Img());
    return b;
}
///****************************
Complex Complex::operator*(Complex& a)//méthode de la multiplication entre les deux nombre complexe
{
    Complex b((m_Re*a.get_Reel())-(m_Img*a.get_Img()), (m_Re*a.get_Img())+(m_Img*a.get_Reel()));
    return b;
}
///****************************
std::ostream& operator<<(std::ostream& flux, Complex& a)
{
    flux << "ecriture algebrique  : " <<a.get_Reel() << " + i("<< a.get_Img()<<")  , \t"<< " ecriture exponentiel  : " <<a.calcule_module()<<"*exp("<<a.calcule_phase()<<")" <<" .\n";
    return flux;
}


