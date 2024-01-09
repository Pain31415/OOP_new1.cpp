#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(const std::string& name, const std::string& type);
    void displayInformation() const;

protected:
    std::string name;
    std::string type;
};

#endif // PET_H