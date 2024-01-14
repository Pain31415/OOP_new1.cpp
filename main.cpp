#include "car.h"
#include "bicycle.h"
#include "cart.h"

int main() {
    // ��������� ��'���� ����� Car
    Car car("Sedan", 10.5);
    car.displayInformation();
    car.transportPassengers(4);
    car.transportCargo(200);

    std::cout << "\n";

    // ��������� ��'���� ����� Bicycle
    Bicycle bicycle;
    bicycle.displayInformation();
    bicycle.transportPassengers(1);
    bicycle.transportCargo(10);

    std::cout << "\n";

    // ��������� ��'���� ����� Cart
    Cart cart;
    cart.displayInformation();
    cart.transportPassengers(2);
    cart.transportCargo(50);

    return 0;
}