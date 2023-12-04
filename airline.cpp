//airline class
// airline name: string
// list of flights: vector or linked list 
// number of flights: int 
#include "airline.h"
#include <iostream>
#include <fstream>



void Airline::display_header() {
    std::cout << "Welcome to the Airline Managment Portal" << std::endl;
}


void Airline::populate_flight_from_file(Flight& flight, const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> flight.flightNumber >> flight.numRows >> flight.seatsPerRow;
        flight.load_passenger_info(filename);
        file.close();
    }
    
    
    
    else {
        std::cerr << "Cannot open file: " << filename << std::endl;
    }
}
void Airline::menu(Flight& flight, const std::string& filename) {
    int q;
    do {
        std::cout << "\nMenu Options:\n1. Show map of seats\n2. Show Passenger Info\n3. Add Passenger\n4. Remove Passenger\n5. Save Passenger Info\n6. Exit" << std::endl;
        std::cout << "Enter an option: ";
        std::cin >> q;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        switch (q) {
        case 1:
            flight.show_seat_map();
            break;
        case 2:
            flight.show_passenger_info();
            break;
        case 3:
            flight.add_passenger();
            break;
        case 4:
            flight.remove_passenger();
            break;
        case 5:
            flight.save_passenger_info(filename);
            break;
        case 6:
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Not a choice. Please try again." << std::endl;
            break;
        }
        if (q != 6) {
            std::cout << "<<<Press Return to Conti....>>>";
            std::cin.get(); 
        }
    } while (q != 6);
}
//Airline::Airline (string n): name(n) {}
