#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "passport.h"
#include <string>

class ForeignPassport : public Passport {
public:
    ForeignPassport(std::string name, std::string passportNumber, std::string visaInfo, std::string foreignPassportNumber);
    void displayVisaInformation() const;

private:
    std::string visaInfo;
    std::string foreignPassportNumber;
};

#endif // FOREIGNPASSPORT_H