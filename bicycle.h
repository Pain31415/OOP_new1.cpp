#ifndef BICYCLE_H
#define BICYCLE_H

#include "transport.h"

class Bicycle : public Transport {
public:
    void transportPassengers(int numberOfPassengers) override;
    void transportCargo(int weight) override;
    void displayInformation() const override;
};

#endif // BICYCLE_H