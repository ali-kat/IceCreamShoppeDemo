#include "VanillaCone.h"

using namespace std;

VanillaCone::VanillaCone(){
	cout << this << " is the cone for your vanilla ice cream!" << endl; 
	cone = new Vanilla*[size];
	for(int i=0; i<size; i++){
		cone[i] = NULL; 
	}
}

VanillaCone::~VanillaCone(){
	cout << this << " cone of vanilla ice cream is being destroyed!" << endl;
	for (int i=0; i<size; i++){
		delete cone[i];
	}
	delete [] cone; // why do we need this?
}

VanillaCone & VanillaCone::addScoop(Vanilla & v){
	if (scoops < size){ // Possible bug right here! :)
		cone[scoops] = &v; 
		scoops++; 
	}
	return *this;
}

void VanillaCone::printOn(ostream & o) const {
	o << "How many scoops of vanilla ice cream do I have?\n";
	for (int i=0; i<size; i++){
		if(cone[i] != NULL){
			o << i << ") " << *cone[i] << "\n"; 
		}
	}
}

ostream & operator<<(ostream & o, const VanillaCone & c) {
	c.printOn(o);
	return o;
}
