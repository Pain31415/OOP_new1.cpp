#include "cart.h"

void Cart::transportPassengers(int numberOfPassengers) {
    std::cout << "Cart is transporting " << numberOfPassengers << " passengers.\n";
}

void Cart::transportCargo(int weight) {
    std::cout << "Cart is transporting cargo with weight " << weight << " kg.\n";
}

void Cart::displayInformation() const {
    std::cout << "Cart\n";
}