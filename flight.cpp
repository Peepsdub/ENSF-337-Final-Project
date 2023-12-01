//flight class

#include "flight.h"
#include "seat.cpp"
Flight::Flight(int r, int c):rows(r), cols(c) {
    vector <vector <Seat*>> seat_map;
    seat_map.resize(rows);

    for (int i = 0; i < rows; i++)
        seat_map.at(i).resize(cols);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            (*seat_map.at(i).at(j)).set_row(i);
            (*seat_map.at(i).at(j)).set_col(num_to_alpha(j));
        }
    }
}


char num_to_alpha(int i) {
    if (i<26)
        i += 97;
    else
        i += 65;
    return char(i);
}

/*
class flight
flight id: string
rows: int
cols: int
list of passengers: vector
seat map: vector or matrix
*/
