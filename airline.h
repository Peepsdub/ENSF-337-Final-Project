#ifndef AIRLINE_H
#define AIRLINE_H
#include "Flight.h"
class Airline {
public:
    void showHeader();
    void loadFlightFromFile(Flight& flight, const std::string& filename);
    void displayMenu(Flight& flight, const std::string& filename);
};

#endif 
