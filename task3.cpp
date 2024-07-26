#include <iostream>
#include <string>

int main() {
    std::string str;
    int index;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter an index: ";
    std::cin >> index;

    if (index >= 0 && index < str.length()) {
        std::cout << "Character at index " << index << ": " << str[index] << std::endl;
    } else {
        std::cout << "Index out of bounds." << std::endl;
    }

    return 0;
}