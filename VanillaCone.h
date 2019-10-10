#ifndef VANILLACONE_H
#define VANILLACONE_H 

#include <iostream>
#include <string>
#include "Vanilla.h"

using namespace std;

class  VanillaCone {
public:
	VanillaCone();
	~VanillaCone();
	VanillaCone & addScoop(Vanilla & v); 
	void printOn(ostream & o) const;
private:
	int size = 5;
	int scoops = 0;
	Vanilla **cone;
};

ostream & operator<<(ostream & o, const VanillaCone & c);

#endif