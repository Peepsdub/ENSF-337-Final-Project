//flight class header
#ifndef FLIGHT_H
#define FLIGHT_H
#include <stdio.h>
#include <string>
#include <vector>
#include "passenger.cpp"
using namespace std;
class Flight {
public:
    Flight(int r, int c);
    Flight(const Flight& f);
    Flight():rows(0), cols(0){}
    ~Flight();

    char num_to_alpha(int i);

private:
    string id;
    int rows;
    int cols;
    vector <Passenger*> pass_list;
};


#endif