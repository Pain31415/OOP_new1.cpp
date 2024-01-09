#include "aspirant.h"
#include <iostream>

Aspirant::Aspirant(std::string name, int age, std::string studentId, std::string thesisTopic)
    : Student(name, age, studentId), thesisTopic(thesisTopic) {}

void Aspirant::displayThesisTopic() const {
    std::cout << "Thesis Topic: " << thesisTopic << "\n";
}