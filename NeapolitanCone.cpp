#include "NeapolitanCone.h"

using namespace std;

NeapolitanCone::NeapolitanCone(){
	cout << this << " is the cone for your neapolitan ice cream!" << endl; 
	cone = new Neapolitan*[size];
	for(int i=0; i<size; i++){
		cone[i] = NULL; 
	}
}

NeapolitanCone::~NeapolitanCone(){
	cout << this << " cone of neapolitan ice cream is being destroyed!" << endl;
	for (int i=0; i<size; i++){
		delete cone[i];
	}
	delete [] cone; // why do we need this?
}

NeapolitanCone & NeapolitanCone::addScoop(Neapolitan & n){
	if (scoops < size){ // Possible bug right here! :)
		cone[scoops] = &n; 
		scoops++; 
	}
	return *this;
}

void NeapolitanCone::printOn(ostream & o) const {
	o << "How many scoops of neapolitan ice cream do I have?\n";
	for (int i=0; i<size; i++){
		if(cone[i] != NULL){
			o << i << ") " << *cone[i] << "\n"; 
		}
	}
}

ostream & operator<<(ostream & o, const NeapolitanCone & c) {
	c.printOn(o);
	return o;
}
