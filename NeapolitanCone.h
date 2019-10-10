#ifndef NEAPOLITANCONE_H
#define NEAPOLITANCONE_H 

#include <iostream>
#include <string>
#include "Neapolitan.h"

using namespace std;

class  NeapolitanCone {
public:
	NeapolitanCone();
	~NeapolitanCone();
	NeapolitanCone & addScoop(Neapolitan & c); 
	void printOn(ostream & o) const;
private:
	int size = 5;
	int scoops = 0;
	Neapolitan **cone;
};

ostream & operator<<(ostream & o, const NeapolitanCone & n);

#endif