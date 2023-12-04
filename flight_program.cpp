#include "Airline.h"
int main() {
    Airline A;
    Flight flight;
    std::string filename = "flight_info.txt";
    A.display_header();
    A.populate_flight_from_file(flight, filename);
    A.menu(flight, filename);
    return 0;
}
