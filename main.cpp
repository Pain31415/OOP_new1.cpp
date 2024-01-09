#include <iostream>
#include "student.h"
#include "aspirant.h"

int main() {
    Student student1("John Doe", 20, "S12345");

    std::cout << "Information about Student:\n";
    student1.displayInformation();
    std::cout << "\n";

    Aspirant aspirant1("Jane Smith", 25, "A67890", "Advanced Topics in Computer Science");

    std::cout << "Information about Aspirant:\n";
    aspirant1.displayInformation();
    aspirant1.displayThesisTopic();

    return 0;
}