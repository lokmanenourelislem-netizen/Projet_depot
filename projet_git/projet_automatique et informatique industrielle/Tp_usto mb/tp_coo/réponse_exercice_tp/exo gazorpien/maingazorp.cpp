#include <iostream>
#include "Gazorpien.h"
#include <string>

using namespace std;


int main()
{
    srand(time(0));
    Gazorpien Bacim("Bacim"), Hou("Talin"), Mou("Malin");
    Bacim.comment_tu_t_appel();//nom du gazorpien
    Bacim.quel_age_a_tu();//age du gazorpien en gulps
    Gazorpien Liili = Bacim.union_(Hou, Mou);//nouveau gazorpien


    cout << Bacim << Liili;
    return 0;
}
