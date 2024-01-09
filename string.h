#ifndef STRING_H
#define STRING_H

#include <cstring>

class String {
public:
    String();
    String(const char* cString);
    String(const String& other);
    String& operator=(const String& other);
    ~String();

    size_t length() const;
    void clear();

    String operator+(const String& other) const;
    String& operator+=(const String& other);

    bool operator==(const String& other) const;
    bool operator!=(const String& other) const;

protected:
    char* data;
};

#endif // STRING_H