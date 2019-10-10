#include "Vanilla.h"

using namespace std;

Vanilla::Vanilla(){
	nameOfFlavour = "Simple Vanilla";
	cout << this << " is a scoop of " << nameOfFlavour << "!" << endl; 
}

Vanilla::~Vanilla(){
	cout << this << " scoop of " << nameOfFlavour << " is being destroyed!" << endl; 
}

void Vanilla::printOn(ostream & ostr) const {
	ostr << nameOfFlavour;
}

ostream & operator<<(ostream & out, const Vanilla & v) {
   v.printOn(out);
   return out;
}
