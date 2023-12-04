#include "Passenger.h"
Passenger::Passenger(const std::string& first, const std::string& last, const std::string& phone, Seat* seat, int id)
    : FName(first), LName(last), PNumber(phone), assignedSeat(seat), idNumber(id) {}
std::string Passenger::getFirstName() const {
    return FName;
}
std::string Passenger::getLastName() const {
    return LName;
}

std::string Passenger::getPhoneNumber() const {
    return PNumber;
}
Seat* Passenger::getAssignedSeat() const {
    return assignedSeat;
}
int Passenger::getIdNumber() const {
    return idNumber;
}

