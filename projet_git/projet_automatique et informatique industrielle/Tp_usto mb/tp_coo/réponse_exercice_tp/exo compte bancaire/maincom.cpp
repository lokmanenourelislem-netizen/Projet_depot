//ce fichier contient l’utilisation de la classe compte
#include <iostream>
#include "Compte.h"

using namespace std;

int main()
{
	//creation d'un compte statique

    Compte compte_fatima(200);//creation du objet statique
    compte_fatima.deposer_argents(1000);//depos d'argent dans le compte

	//creation d'un compte dynamique

    Compte *amine_account;//definition du pointeur vers la classe compte
    amine_account = new Compte(50);//creation du objet dynamique
    amine_account->deposer_argents(2);//depos d'argent dans le compte
    amine_account->afficher_argents();//affichage du solde bancaire




    return 0;
}
