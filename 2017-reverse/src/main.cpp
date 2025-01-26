#include <iostream>

int main() {
    std::string input;

    std::cout << "Enter phrase :";
    std::cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        std::cout << input[i];
    }

    return 0;
}