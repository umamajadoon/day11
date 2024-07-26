#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int i = 0;
    while (i < str.length()) {
        std::cout << "Character at index " << i << ": " << str[i] << std::endl;
        ++i;
    }

    return 0;
}