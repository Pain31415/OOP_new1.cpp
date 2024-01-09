#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>

class Passport {
public:
    Passport(std::string name, std::string passportNumber);
    void displayInformation() const;

protected:
    std::string name;
    std::string passportNumber;
};

#endif // PASSPORT_H