#ifndef NEAPOLITAN_H
#define NEAPOLITAN_H

#include <iostream>
#include <string>
#include "Vanilla.h"
#include "Chocolate.h"
#include "Strawberry.h"

using namespace std;

class Neapolitan{
public:
Neapolitan() ;
~Neapolitan();
void printOn(ostream & ostr) const;
private:
	string nameOfFlavour; 
	Vanilla* vanilla; 
	Chocolate* chocolate;
	Strawberry* strawberry;
}; 

ostream & operator<<(ostream & out, const Neapolitan & n);

#endif
