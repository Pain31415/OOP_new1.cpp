#ifndef DOG_H
#define DOG_H

#include "pet.h"

class Dog : public Pet {
public:
    Dog(const std::string& name, const std::string& breed);
    void displayBreed() const;

private:
    std::string breed;
};

#endif // DOG_H