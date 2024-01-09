#include "parrot.h"
#include <iostream>

Parrot::Parrot(const std::string& name, const std::string& language)
    : Pet(name, "Parrot"), language(language) {}

void Parrot::displayLanguage() const {
    std::cout << "Language: " << language << "\n";
}