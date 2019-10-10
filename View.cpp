#include <string>
#include <iostream>
#include <sstream>
#include "View.h"

using namespace std;

View::View() {
	cout << this << " is the view object!" << endl; 
}

View::~View() {
	cout << this << " is the view object being destroyed!" << endl; 
}

void View::printMessage(const string & str){
	cout << str << endl; 
}

void View::printMenu(){ 
	cout << "Menu:" << endl;
	cout << "(0) Quit" << endl;
	cout << "(1) Order vanilla ice cream." << endl; 
	cout << "(2) Order chocolate ice cream." << endl;
	cout << "(3) Order strawberry ice cream." << endl; 
	cout << "(4) Order neapolitan ice cream!" << endl; 
}

int View::getSelection() { 
	string str; 
	int choice = -1; 

	while (choice < 0 || choice > 5) {
		cout << "Please enter your selection: " << endl; 
		getline(cin, str); 
		stringstream ss(str);
		ss >> choice; 
		if (choice == 0) {
			return 0; 
		}else if (choice > 0 || choice < 5) {
			return choice;
		}
	}

	return choice;
}

void View::pause(){
	string str; 

	cout << "Press enter to continue..." << endl; 
	getline(cin, str); 
}
