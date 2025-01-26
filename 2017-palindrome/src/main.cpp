#include <iostream>

int main() {
    std::string input;
    std::string reverse;

    std::cout << "Enter phrase :";
    std::cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        reverse += input[i];
    }

    if (input == reverse) {
        std::cout << "\nLa phrase est palindrome !";
    } else {
        std::cout << "\nLa phrase n'est pas palindrome !";
    }


    return 0;
}