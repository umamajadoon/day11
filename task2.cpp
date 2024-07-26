#include <iostream>
#include <string>

int main() {
    std::string input;
    int number;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    number = std::stoi(input);
    number -= 10;
    std::cout << "Result after subtracting 10: " << number << std::endl;

    return 0;
}