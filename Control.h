#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include <iostream>
#include <sstream>
#include "View.h"
#include "VanillaCone.h"
#include "ChocolateCone.h"
#include "StrawberryCone.h"
#include "NeapolitanCone.h"
#include "Vanilla.h"
#include "Chocolate.h"
#include "Strawberry.h"
#include "Neapolitan.h"

using namespace std;

class Control {
	public:
		Control(); 
		~Control();
		void run(); 		
	private: 
		View view;
		VanillaCone vanillaCone; 
		ChocolateCone chocolateCone; 
		StrawberryCone strawberryCone; 
		NeapolitanCone neapolitanCone;
};

#endif