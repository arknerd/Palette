//Patricia Jarrett
#include "Palette.h"
#include <iostream>
using namespace std;

void main()
{
	Palette prime1(Red), prime2(Yellow), mixed(Orange);
	Palette mix12 = prime1+prime2;  
	cout << mix12;
	cin.get();
	Palette filter1 = mixed - prime1;            
	cout << filter1;
	cin.get();
	//Palette next = filter1++;		             //next = White, isPrimary= true;
	//next++;                                    //next = Black, isPrimary=true;
	//next++;                                    //next = Purple, isPrimary = false;
	Palette mix2(Blue);
	mix2 += filter1;                           //mix2 = Green, isPrimary = false;
	cout << mix2;
	cin.get();											   
}