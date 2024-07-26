#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << "Uppercase string: " << str << std::endl;

    return 0;
}