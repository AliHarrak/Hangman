#include <iostream>
#include <vector>
#include "Penduproj.h"
using namespace std;


void Bienvenue()
{ 
std::cout << "=====================\n";
std::cout << "Jeu du Pendu\n";
std::cout << "=====================\n";
std::cout << "INSTRUCTION: DEVINEZ LE MOT CACHE POUR RESTER EN VIE.\n";
}

void ChancesRates(int rates)
{
if(rates==0)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==1)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O  \n";
cout<<" | \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==2)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O  \n";
cout<<" | |  \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==3)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O   \n";
cout<<" |/|   \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==4)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O   \n";
cout<<" |/|\\  \n";
cout<<" | \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==5)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O   \n";
cout<<" |/|\\  \n";
cout<<" |/    \n";
cout<<" | \n";
cout<<" ========= \n";
}
else if(rates==6)
{
cout<<" +---+ \n";
cout<<" | | \n";
cout<<" | O    \n";
cout<<" |/|\\   \n";
cout<<" |/ \\   \n";
cout<<" | \n";
cout<<" ========= \n";
}
} 

void CorrIncorr(vector<char> incorrect, string rep)
{
cout<<"Lettre incorrecte: \n";
for(int i = 0; i<incorrect.size(); i++)
{
cout<<incorrect[i]<<" ";
}

cout<<"\nMot Cle:\n";
for(int i = 0; i<rep.length(); i++)
{
cout<<rep[i]<<" ";
}
}

void Fin(string rep, string motcle)
{
if(rep==motcle)
{
cout<<endl;
cout<< "le mot est: "<<motcle<<endl;
cout<<"SUPER! VOUS AVEZ SURVIVE, BRAVO! \n";
}
else
{
cout<<"VOUS AVEZ PERDU! BONNE CHANCE POUR LA PROCHAINE FOIS\n\n";

cout<<"le mot etait | "<<motcle<<" |";
}
}


