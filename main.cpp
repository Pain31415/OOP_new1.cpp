#include "passport.h"
#include "foreignpassport.h"

int main() {
    Passport ukrainianPassport("John Doe", "UA123456");

    std::cout << "Information about Ukrainian Passport:\n";
    ukrainianPassport.displayInformation();
    std::cout << "\n";

    ForeignPassport foreignPassport("Jane Smith", "FP789012", "Multiple Entry", "AB987654");

    std::cout << "Information about Foreign Passport:\n";
    foreignPassport.displayInformation();
    foreignPassport.displayVisaInformation();

    return 0;
}