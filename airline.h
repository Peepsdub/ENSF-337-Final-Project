//airline class header
#ifndef AIRLINE_H
#define AIRLINE_H
#include <stdio.h>
#include <vector>
#include <string>
#include"flight.cpp"
using namespace std;
class Airline{
public:
    Airline(string n);
    Airline():name(""){}

private:
    string name;
    vector <Flight*> flights;
    int num_flights;

};
#endif
