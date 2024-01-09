#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat : public Pet {
public:
    Cat(const std::string& name, const std::string& color);
    void displayColor() const;

private:
    std::string color;
};

#endif // CAT_H