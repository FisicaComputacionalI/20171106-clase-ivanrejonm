//clase

#include <iostream> 
using namespace std;
int main ()
{
  char variable;
  cout<<"Escoge una opción"<<endl;
    cin>>variable;
    variable = toupper(variable);
    switch (variable) {
    case 'A': cout<<"perrillo desde chiquillo"<<endl;break;
    case 'B': cout<<"Très bien, mon ami"<<endl;break;
    case 'C': cout<<"never give up"<<endl;break;
    case 'D': cout<<"mñeh"<<endl;break;
    case 'F': cout<<"mal,chavito"<<endl;break;
    default : cout<<"oye no"<<endl;
    }
    return 0;
}
