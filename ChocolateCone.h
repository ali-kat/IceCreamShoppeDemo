#ifndef CHOCOLATECONE_H
#define CHOCOLATECONE_H 

#include <iostream>
#include <string>
#include "Chocolate.h"

using namespace std;

class  ChocolateCone {
public:
	ChocolateCone();
	~ChocolateCone();
	ChocolateCone & addScoop(Chocolate & c); 
	void printOn(ostream & o) const;
private:
	int size = 5;
	int scoops = 0;
	Chocolate **cone;
};

ostream & operator<<(ostream & o, const ChocolateCone & c);

#endif