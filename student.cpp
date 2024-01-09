#include "student.h"
#include <iostream>

Student::Student(std::string name, int age, std::string studentId)
    : name(name), age(age), studentId(studentId) {}

void Student::displayInformation() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Student ID: " << studentId << "\n";
}