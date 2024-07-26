#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    for (int i = 0; i < str.length(); ++i) {
        std::cout << str[i] << std::endl;
    }

    return 0;
}