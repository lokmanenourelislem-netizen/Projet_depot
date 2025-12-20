#include "Date.h"

using namespace std;

int main()
{
    Date date1, date2(41, 12, 1998);
    cout << date1;//affichage de la date d'aujourd'hui
    date2.demain();
    cout << date2;//affichage de la date du lendemain


    return 0;
}
