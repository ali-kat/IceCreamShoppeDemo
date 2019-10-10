#ifndef STRAWBERRYCONE_H
#define STRAWBERRYCONE_H 

#include <iostream>
#include <string>
#include "Strawberry.h"

using namespace std;

class  StrawberryCone {
public:
	StrawberryCone();
	~StrawberryCone();
	StrawberryCone & addScoop(Strawberry & s); 
	void printOn(ostream & o) const;
private:
	int size = 5;
	int scoops = 0;
	Strawberry **cone;
};

ostream & operator<<(ostream & o, const StrawberryCone & c);

#endif