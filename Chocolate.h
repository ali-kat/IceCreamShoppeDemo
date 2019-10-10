#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include <iostream>
#include <string>

using namespace std;

class Chocolate{
public:
Chocolate() ;
~Chocolate();
void printOn(ostream & ostr) const;
private:
	string nameOfFlavour; 
}; 

ostream & operator<<(ostream & out, const Chocolate & v);

#endif
