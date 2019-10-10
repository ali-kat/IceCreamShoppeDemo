#ifndef STRAWBERRY_H
#define STRAWBERRY_H

#include <iostream>
#include <string>

using namespace std;

class Strawberry{
public:
Strawberry() ;
~Strawberry();
void printOn(ostream & ostr) const;
private:
	string nameOfFlavour; 
}; 

ostream & operator<<(ostream & out, const Strawberry & s);

#endif
