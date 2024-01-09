#include "foreignpassport.h"
#include <iostream>

ForeignPassport::ForeignPassport(std::string name, std::string passportNumber, std::string visaInfo, std::string foreignPassportNumber)
    : Passport(name, passportNumber), visaInfo(visaInfo), foreignPassportNumber(foreignPassportNumber) {}

void ForeignPassport::displayVisaInformation() const {
    std::cout << "Visa Information: " << visaInfo << "\n";
    std::cout << "Foreign Passport Number: " << foreignPassportNumber << "\n";
}