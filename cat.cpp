#include "cat.h"
#include <iostream>

Cat::Cat(const std::string& name, const std::string& color)
    : Pet(name, "Cat"), color(color) {}

void Cat::displayColor() const {
    std::cout << "Color: " << color << "\n";
}