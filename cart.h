#ifndef CART_H
#define CART_H

#include "transport.h"

class Cart : public Transport {
public:
    void transportPassengers(int numberOfPassengers) override;
    void transportCargo(int weight) override;
    void displayInformation() const override;
};

#endif // CART_H