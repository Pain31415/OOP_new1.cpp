#ifndef PARROT_H
#define PARROT_H

#include "pet.h"

class Parrot : public Pet {
public:
    Parrot(const std::string& name, const std::string& language);
    void displayLanguage() const;

private:
    std::string language;
};

#endif // PARROT_H