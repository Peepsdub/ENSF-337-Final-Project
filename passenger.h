//passenger class header
#ifndef PASS_H
#define PASS_H
#include <string>
#include <stdio.h>
using namespace std;
class Passenger {
public:
    Passenger(string f, string l, string p);
    Passenger():fname(""), lname(""), phone(""), id(0){}
    ~Passenger();

    string get_fname() const {return fname;}
    string get_lname() const {return lname;}
    string get_phone() const {return phone;}
    int get_id() const {return id;}

private:
    string fname;
    string lname;
    string phone;
    int id;
    Seat* seat;

};

#endif