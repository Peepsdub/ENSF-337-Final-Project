//seat class header
/*#ifndef SEAT_H
#define SEAT_H
#include <stdio.h>
using namespace std;
class Seat {
public:
    Seat():row(0), col(' '), status(false){}
    ~Seat();

    void set_row(int r) {row = r;}
    void set_col(int c) {col = c;}
    void set_status(bool s) {status = s;}
    bool get_status() const {return status;}

private:
    int row;
    char col;
    bool status;
};


#endif
*/


#ifndef SEAT_H
#define SEAT_H

class Seat {

public:

    Seat (int r, char s);

    int getRow() const { return row; }

    char getSeat() const { return seat; }

private:

    int row;

    char seat;
};

#endif
