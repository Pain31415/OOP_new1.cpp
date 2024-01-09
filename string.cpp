#include "string.h"

String::String() : data(new char[1]) {
    data[0] = '\0';
}

String::String(const char* cString) : data(new char[strlen(cString) + 1]) {
    strcpy(data, cString);
}

String::String(const String& other) : data(new char[other.length() + 1]) {
    strcpy(data, other.data);
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] data;
        data = new char[other.length() + 1];
        strcpy(data, other.data);
    }
    return *this;
}

String::~String() {
    delete[] data;
}

size_t String::length() const {
    return strlen(data);
}

void String::clear() {
    delete[] data;
    data = new char[1];
    data[0] = '\0';
}

String String::operator+(const String& other) const {
    String result;
    delete[] result.data;
    result.data = new char[length() + other.length() + 1];
    strcpy(result.data, data);
    strcat(result.data, other.data);
    return result;
}

String& String::operator+=(const String& other) {
    char* temp = new char[length() + other.length() + 1];
    strcpy(temp, data);
    strcat(temp, other.data);
    delete[] data;
    data = temp;
    return *this;
}

bool String::operator==(const String& other) const {
    return (strcmp(data, other.data) == 0);
}

bool String::operator!=(const String& other) const {
    return !(*this == other);
}