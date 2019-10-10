#include "Chocolate.h"

using namespace std;

Chocolate::Chocolate(){
	nameOfFlavour = "Simple Chocolate";
	cout << this << " is a scoop of " << nameOfFlavour << "!" << endl; 
}

Chocolate::~Chocolate(){
	cout << this << " scoop of " << nameOfFlavour << " is being destroyed!" << endl; 
}

void Chocolate::printOn(ostream & ostr) const {
	ostr << nameOfFlavour;
}

ostream & operator<<(ostream & out, const Chocolate & c) {
   c.printOn(out);
   return out;
}
