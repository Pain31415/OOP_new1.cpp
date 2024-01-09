#include "car.h"

Car::Car(std::string model, double fuelEfficiency)
    : model(model), fuelEfficiency(fuelEfficiency) {}

void Car::transportPassengers(int numberOfPassengers) {
    std::cout << "Car is transporting " << numberOfPassengers << " passengers.\n";
}

void Car::transportCargo(int weight) {
    std::cout << "Car is transporting cargo with weight " << weight << " kg.\n";
}

void Car::displayInformation() const {
    std::cout << "Car Model: " << model << "\n";
}