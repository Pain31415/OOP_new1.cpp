#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student {
public:
    Aspirant(std::string name, int age, std::string studentId, std::string thesisTopic);
    void displayThesisTopic() const;

private:
    std::string thesisTopic;
};

#endif // ASPIRANT_H