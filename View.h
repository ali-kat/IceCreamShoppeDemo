#ifndef VIEW_H
#define VIEW_H
using namespace std;
#include <string>
#include <iostream>
#include <sstream>

class View {
    public:
    	View();
    	~View();
        void printMessage(const string & str); 
        void printMenu();
        int getSelection();
        void pause(); 
};

#endif