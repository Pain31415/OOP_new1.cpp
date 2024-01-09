#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport {
public:
    Car(std::string model, double fuelEfficiency);
    void transportPassengers(int numberOfPassengers) override;
    void transportCargo(int weight) override;
    void displayInformation() const override;

private:
    std::string model;
    double fuelEfficiency;
};

#endif // CAR_H