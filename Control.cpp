#include "Control.h"

using namespace std;

Control::Control(){
	cout << this << " is the control object!" << endl; 
}

Control::~Control(){
	cout << this << " is the control object being destroyed!" << endl; 
}

void Control::run(){
	int selection; 
	view.printMessage("Ice Cream Shoppe \n Version 0.1 alpha \n This code is for a valgrind and memory management demo.");
	while(1){
		view.printMenu();
		selection = view.getSelection();
		if (selection == 0) {
			break; 
		} else {
			if (selection == 1) {
				vanillaCone.addScoop(*(new Vanilla())); 
			}else if (selection == 2) {
				chocolateCone.addScoop(*(new Chocolate()));
			}else if (selection == 3) {
				strawberryCone.addScoop(*(new Strawberry())); 
			}else if (selection == 4) {
				neapolitanCone.addScoop(*(new Neapolitan()));
			}
		} 
	}
	cout << vanillaCone; 
	cout << chocolateCone;
	cout << strawberryCone;
	cout << neapolitanCone;
}