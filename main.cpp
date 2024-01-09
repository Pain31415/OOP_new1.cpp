#include "dog.h"
#include "cat.h"
#include "parrot.h"

int main() {
    Dog dog("Buddy", "Golden Retriever");
    std::cout << "Information about Dog:\n";
    dog.displayInformation();
    dog.displayBreed();
    std::cout << "\n";

    Cat cat("Whiskers", "Orange");
    std::cout << "Information about Cat:\n";
    cat.displayInformation();
    cat.displayColor();
    std::cout << "\n";

    Parrot parrot("Polly", "English");
    std::cout << "Information about Parrot:\n";
    parrot.displayInformation();
    parrot.displayLanguage();

    return 0;
}