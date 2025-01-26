#include <iostream>

int main() {
    double numOne;
    double numTwo;
    std::string ope;

    std::cout << "\n--> Premier chiffre :";
    std::cin >> numOne;

    std::cout << "\n--> Deuxieme chiffre :";
    std::cin >> numTwo;

    std::cout << "\n--> Operateur :";
    std::cin >> ope;

    if (ope == "+") {
        std::cout << numOne << " + " << numTwo << " = " << numOne + numTwo;
    } else if (ope == "-") {
        std::cout << numOne << " - " << numTwo << " = " << numOne - numTwo;
    } else if (ope == "*") {
        std::cout << numOne << " x " << numTwo << " = " << numOne * numTwo;
    } else if (ope == "/") {
        if (numTwo != 0) {
            std::cout << numOne << " / " << numTwo << " = " << numOne / numTwo;
        } else {
            std::cout << "\n--> Division par 0 impossible !";
        }
    } else {
        std::cout << "\n--> Operateur inconnu ou chiffre invalide !";
    }

    return 0;
}
