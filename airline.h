#ifndef AIRLINE_H
#define AIRLINE_H

#include "Flight.h"

class Airline {
public:
    Airline(const std::string& airlineName);  // Constructor
    void showHeader() const;  // Renamed: display_header() to showHeader()
    void loadFlightFromFile(Flight& flight, const std::string& filename);  // Renamed: populate_flight_from_file() to loadFlightFromFile()
    void displayMenu(Flight& flight, const std::string& filename);  // Renamed: menu() to displayMenu()

private:
    std::string airlineName;  // Added: member variable to store the airline's name
};

#endif
