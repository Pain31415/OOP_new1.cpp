#include "bicycle.h"

void Bicycle::transportPassengers(int numberOfPassengers) {
    std::cout << "Bicycle is transporting " << numberOfPassengers << " passengers.\n";
}

void Bicycle::transportCargo(int weight) {
    std::cout << "Bicycle is transporting cargo with weight " << weight << " kg.\n";
}

void Bicycle::displayInformation() const {
    std::cout << "Bicycle\n";
}