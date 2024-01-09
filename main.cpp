#include "bitstring.h"
#include <iostream>

int main() {
    String str1("Hello");
    String str2("World");

    std::cout << "String 1: ";
    str1.displayInformation();
    std::cout << "String 2: ";
    str2.displayInformation();

    String str3 = str1 + str2;
    std::cout << "String 3 (Concatenation of String 1 and String 2): ";
    str3.displayInformation();

    String str4 = str3;
    std::cout << "String 4 (Copy of String 3): ";
    str4.displayInformation();

    str4.clear();
    std::cout << "String 4 after clearing: ";
    str4.displayInformation();

    std::cout << "\n";

    BitString bitStr1("1010");
    BitString bitStr2("1101");

    std::cout << "BitString 1: ";
    bitStr1.displayInformation();
    std::cout << "BitString 2: ";
    bitStr2.displayInformation();

    BitString bitStr3 = bitStr1 + bitStr2;
    std::cout << "BitString 3 (Sum of BitString 1 and BitString 2): ";
    bitStr3.displayInformation();

    BitString bitStr4 = bitStr3;
    std::cout << "BitString 4 (Copy of BitString 3): ";
    bitStr4.displayInformation();

    bitStr4.changeSign();
    std::cout << "BitString 4 after changing sign: ";
    bitStr4.displayInformation();

    return 0;
}