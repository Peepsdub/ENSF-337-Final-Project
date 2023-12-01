//Version: 1.0
//Term Project - Flight Management Program in C++
//Produced by: Dubovsky Petr, Stefanczyk Jakub, Lalu Neha 
#include <iostream>
using namespace std;

void menu();

int main () {
    cout << "Version: 1.0" << endl;
    cout << "Term Project - Flight Management Program in C++" << endl;
    cout << "Produced by: Dubovsky Petr, Stefanczyk Jakub, Lalu Neha" << endl;
    cout << "<<< Press Return to Continue >>>" << endl;
}

void menu() {
    cout << "Please select on of the following options" << endl;
    cout << "1. Display flight seat map"  << endl;
    cout << "2. Display passengers information" << endl;
    cout << "3. Add a new passenger" << endl;
    cout << "4. Remove an existing passenger" << endl;
    cout << "5. Save data" << endl;
    cout << "6. Quit" << endl;

}

// member functions for all: setters, getters, ctor, copy ctor, dector
