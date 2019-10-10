#include "Neapolitan.h"

using namespace std;

Neapolitan::Neapolitan(){
	nameOfFlavour = "Simple Neapolitan";
	cout << this << " is a scoop of " << nameOfFlavour << "!" << endl; 
	vanilla = new Vanilla();
	chocolate = new Chocolate();
	strawberry = new Strawberry();
}

Neapolitan::~Neapolitan(){
	delete vanilla;
	delete chocolate;
	delete strawberry;
	cout << this << " scoop of " << nameOfFlavour << " is being destroyed!" << endl; 
}

void Neapolitan::printOn(ostream & ostr) const {
	ostr << nameOfFlavour;
}

ostream & operator<<(ostream & out, const Neapolitan & n) {
   n.printOn(out);
   return out;
}