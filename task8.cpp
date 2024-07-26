#include <iostream>
#include <string>

int main() {
    std::string str;
    int start, end;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the starting index: ";
    std::cin >> start;
    std::cout << "Enter the ending index: ";
    std::cin >> end;

    if (start >= 0 && end <= str.length() && start < end) {
        std::string substring = str.substr(start, end - start);
        std::cout << "Substring: " << substring << std::endl;
    } else {
        std::cout << "Indices are out of bounds." << std::endl;
    }

    return 0;
}