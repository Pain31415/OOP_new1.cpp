#ifndef BITSTRING_H
#define BITSTRING_H

#include "string.h"

class BitString : public String {
public:
    BitString();
    BitString(const char* cString);
    BitString(const BitString& other);
    BitString& operator=(const BitString& other);
    ~BitString();

    void changeSign();
    BitString operator+(const BitString& other) const;
    BitString& operator+=(const BitString& other);
};

#endif // BITSTRING_H