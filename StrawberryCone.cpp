#include "StrawberryCone.h"

using namespace std;

StrawberryCone::StrawberryCone(){
	cout << this << " is the cone for your strawberry ice cream!" << endl; 
	cone = new Strawberry*[size];
	for(int i=0; i<size; i++){
		cone[i] = NULL; 
	}
}

StrawberryCone::~StrawberryCone(){
	cout << this << " cone of strawberry ice cream is being destroyed!" << endl;
	for (int i=0; i<size; i++){
		delete cone[i];
	}
	delete [] cone; // why do we need this?
}

StrawberryCone & StrawberryCone::addScoop(Strawberry & s){
	if (scoops < size){ // Possible bug right here! :)
		cone[scoops] = &s; 
		scoops++; 
	}
	return *this;
}

void StrawberryCone::printOn(ostream & o) const {
	o << "How many scoops of strawberry ice cream do I have?\n";
	for (int i=0; i<size; i++){
		if(cone[i] != NULL){
			o << i << ") " << *cone[i] << "\n"; 
		}
	}
}

ostream & operator<<(ostream & o, const StrawberryCone & c) {
	c.printOn(o);
	return o;
}
