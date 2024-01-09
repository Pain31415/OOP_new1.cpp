#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>

class Transport {
public:
    virtual void transportPassengers(int numberOfPassengers) = 0;
    virtual void transportCargo(int weight) = 0;
    virtual void displayInformation() const = 0;
    virtual ~Transport() {}
};

#endif // TRANSPORT_H