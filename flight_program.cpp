#include "airline.h"
int main() {
    Airline airline;
    Flight flight;
    std::string filename = "flight_info.txt";
    airline.showHeader();
    airline.loadFlightFromFile(flight, filename);
    airline.displayMenu(flight, filename);
    return 0;
}
