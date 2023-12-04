#include "airline.h"
int main() {
    Airline airline;
    Flight flight;
    std::string filename = "flight_info.txt";
    Airline.display_header();
    Airline.populate_flight_from_file(flight, filename);
    Airline.menu(flight, filename);
    return 0;
}
