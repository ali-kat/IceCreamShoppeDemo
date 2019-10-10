#include "Strawberry.h"

using namespace std;

Strawberry::Strawberry(){
	nameOfFlavour = "Simple Strawberry";
	cout << this << " is a scoop of " << nameOfFlavour << "!" << endl; 
}

Strawberry::~Strawberry(){
	cout << this << " scoop of " << nameOfFlavour << " is being destroyed!" << endl; 
}

void Strawberry::printOn(ostream & ostr) const {
	ostr << nameOfFlavour;
}

ostream & operator<<(ostream & out, const Strawberry & s) {
   s.printOn(out);
   return out;
}
