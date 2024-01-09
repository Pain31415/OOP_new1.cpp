#include "pet.h"
#include <iostream>

Pet::Pet(const std::string& name, const std::string& type)
    : name(name), type(type) {}

void Pet::displayInformation() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Type: " << type << "\n";
}