#include <iostream>
#include <string>

int main() {
    std::string str;
    char character;
    int count = 0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a character to count: ";
    std::cin >> character;

    for (char c : str) {
        if (c == character) {
            ++count;
        }
    }

    std::cout << "The character '" << character << "' appears " << count << " times in the string." << std::endl;

    return 0;
}