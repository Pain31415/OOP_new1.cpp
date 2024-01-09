#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(std::string name, int age, std::string studentId);
    void displayInformation() const;

private:
    std::string name;
    int age;
    std::string studentId;
};

#endif // STUDENT_H