#include "bitstring.h"

BitString::BitString() : String() {}

BitString::BitString(const char* cString) : String() {
    for (size_t i = 0; i < length(); ++i) {
        if (cString[i] != '0' && cString[i] != '1') {
            clear();
            break;
        }
    }
    if (data[0] == '\0') {
        return;
    }

    delete[] data;
    data = new char[length() + 1];
    strcpy(data, cString);
}

BitString::BitString(const BitString& other) : String(other) {}

BitString& BitString::operator=(const BitString& other) {
    if (this != &other) {
        String::operator=(other);
    }
    return *this;
}

BitString::~BitString() {}

void BitString::changeSign() {
    for (size_t i = 0; i < length(); ++i) {
        data[i] = (data[i] == '0') ? '1' : '0';
    }
}

BitString BitString::operator+(const BitString& other) const {
    BitString result;
    delete[] result.data;
    result.data = new char[length() + other.length() + 1];
    strcpy(result.data, data);
    strcat(result.data, other.data);
    return result;
}

BitString& BitString::operator+=(const BitString& other) {
    char* temp = new char[length() + other.length() + 1];
    strcpy(temp, data);
    strcat(temp, other.data);
    delete[] data;
    data = temp;
    return *this;
}