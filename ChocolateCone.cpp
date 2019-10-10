#include "ChocolateCone.h"

using namespace std;

ChocolateCone::ChocolateCone(){
	cout << this << " is the cone for your chocolate ice cream!" << endl; 
	cone = new Chocolate*[size];
	for(int i=0; i<size; i++){
		cone[i] = NULL; 
	}
}

ChocolateCone::~ChocolateCone(){
	cout << this << " cone of chocolate ice cream is being destroyed!" << endl;
	for (int i=0; i<size; i++){
		delete cone[i];
	}
	delete [] cone; // why do we need this?
}

ChocolateCone & ChocolateCone::addScoop(Chocolate & c){
	if (scoops < size){ // Possible bug right here! :)
		cone[scoops] = &c; 
		scoops++; 
	}
	return *this;
}

void ChocolateCone::printOn(ostream & o) const {
	o << "How many scoops of chocolate ice cream do I have?\n";
	for (int i=0; i<size; i++){
		if(cone[i] != NULL){
			o << i << ") " << *cone[i] << "\n"; 
		}
	}
}

ostream & operator<<(ostream & o, const ChocolateCone & c) {
	c.printOn(o);
	return o;
}
