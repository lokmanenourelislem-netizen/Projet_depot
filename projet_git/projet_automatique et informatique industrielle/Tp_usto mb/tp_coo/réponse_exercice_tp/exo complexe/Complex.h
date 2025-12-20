#pragma once

#ifndef COMPLEX_h
#define COMPLEX_h

#include <ostream>
//declaration de la class complex
class Complex
{
public:
    Complex(float Re = 0, float Img = 0);//constructeur
    ~Complex();//destructeur
    void ecriture_algebriq(void);// declaration de la méthode  d'écriture algébrique 
    void ecriture_exponentiel(void);// declaration de la méthode  d'écriture exponentiel
//********************
    float get_Reel();
    float get_Img();
    float get_module();
    float get_phase();
//********************
    void set_Reel(float);
    void set_Img(float);
    void set_module_Phase(float Module, float Phase);

//*********************

    float calcule_module(void);
    float calcule_phase(void);

//*********************
    Complex operator+(Complex& a);//définition de la méthode de l'addition entre les deux nombre complexe

    Complex operator-(Complex& a);//définition de la méthode de la soustraction entre les deux nombre complexe
    Complex operator*(Complex& a);////définition de la méthode de la multiplication entre les deux nombre complexe

//*********************
private:
    float m_Re;
    float m_Img;

};

std::ostream& operator<<(std::ostream& flux, Complex& a);



#endif // COMPLEX_h
