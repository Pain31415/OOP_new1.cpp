#include "car.h"
#include "bicycle.h"
#include "cart.h"

int main() {
    // Створення об'єкта класу Car
    Car car("Sedan", 10.5);
    car.displayInformation();
    car.transportPassengers(4);
    car.transportCargo(200);

    std::cout << "\n";

    // Створення об'єкта класу Bicycle
    Bicycle bicycle;
    bicycle.displayInformation();
    bicycle.transportPassengers(1);
    bicycle.transportCargo(10);

    std::cout << "\n";

    // Створення об'єкта класу Cart
    Cart cart;
    cart.displayInformation();
    cart.transportPassengers(2);
    cart.transportCargo(50);

    return 0;
}