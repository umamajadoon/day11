#include <iostream>
#include <string>

int main() {
    std::string str, substring;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a substring to search: ";
    std::getline(std::cin, substring);

    size_t found = str.find(substring);
    if (found != std::string::npos) {
        std::cout << "Substring found at index: " << found << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}