#include "passport.h"
#include <iostream>

Passport::Passport(std::string name, std::string passportNumber)
    : name(name), passportNumber(passportNumber) {}

void Passport::displayInformation() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Passport Number: " << passportNumber << "\n";
}