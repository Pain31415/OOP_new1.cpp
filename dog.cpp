#include "dog.h"
#include <iostream>

Dog::Dog(const std::string& name, const std::string& breed)
    : Pet(name, "Dog"), breed(breed) {}

void Dog::displayBreed() const {
    std::cout << "Breed: " << breed << "\n";
}