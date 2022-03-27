#include <iostream>
#include <vector>
#include "Penduproj.h"
using namespace std;
int main()
{
Bienvenue();

string motcle = "anticonstitutionnellement";
string rep = "_________________________";
int rates = 0;
vector<char> incorrect;
bool Dev = false;
char lettre;

while(rep!=motcle && rates < 7)
{
ChancesRates(rates);
CorrIncorr(incorrect, rep);

cout<<"\n\nVeuillez deviner une lettre: ";
cin>>lettre;

for(int i = 0; i<motcle.length(); i++)
{
if(lettre==motcle[i])
{
rep[i] = lettre;
Dev = true;
}
}
if(Dev)
{
cout<<"\nCorrecte!\n";
}
else
{
cout<<"\nIncorrecte! Une autre partie du corde est ajoutee.\n";
incorrect.push_back(lettre);
rates++;
}
Dev = false;
}
Fin(rep, motcle);
return 0;
}
