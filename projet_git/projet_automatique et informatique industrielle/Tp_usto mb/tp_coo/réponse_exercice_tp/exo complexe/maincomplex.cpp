#include<ostream>
#include "Complex.h"
#include <cmath>
#include <iostream>

 using namespace std;

 int main(){

	 Complex c;
	 
	
	  c.set_Reel(5);//valeur reél égal à 5
	 c.set_Img(6);//valeur imaginaire égal à 6
	 c.calcule_module();//calcul du module
	 c.calcule_phase();//calcul de la phase
	 c.ecriture_algebriq();//ecriture algebrique
	 c.ecriture_exponentiel();//ecriture exponentiel
	 
	 Complex a;
	  a.set_Reel(7);
	 a.set_Img(11);
	 a.calcule_module();
	 a.calcule_phase();
	 a.ecriture_algebriq();
	 a.ecriture_exponentiel();

	  Complex d;
	  d=a+c;
	  cout<<d;//affichage du résultat de l'addition entre les deux nombre complexe
	  d=a-c;
	  cout<<d;//affichage du résultat de la soustraction entre les deux nombre complexe
	  d=a*c;
	  cout<<d;//affichage du résultat de la multiplication entre les deux nombre complexe
	  	 




	 return 0;
 }
