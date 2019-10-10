#ifndef VANILLA_H
#define VANILLA_H

#include <iostream>
#include <string>

using namespace std;

class Vanilla{
public:
Vanilla() ;
~Vanilla();
void printOn(ostream & ostr) const;
private:
	string nameOfFlavour; 
}; 

ostream & operator<<(ostream & out, const Vanilla & v);

#endif
