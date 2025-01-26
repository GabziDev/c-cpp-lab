#include <iostream>
#include <list>

bool contains(char x, const std::list<char> list) {
    // auto = prend n'importe quuel type
    // list.begin() = prend premier item list
    // list.end() = pointe après le dernier item
    for (auto it = list.begin(); it != list.end(); ++it) {
        if (*it == x) {
            return true;
        }
    }

    return false;
}

int main() {
    std::string phrase;
    int numVoyelles = 0;
    std::list<char> voyelles = {'a', 'e', 'i', 'o', 'u'};

    std::cout << "Enter Phrase: ";
    std::getline(std::cin, phrase);

    for (int i = 0; i < phrase.length(); i++) {
        if (contains(tolower(phrase[i]), voyelles)) {
            numVoyelles++;
        }
    }

    std::cout << "Nombre de voyelles : " << numVoyelles << std::endl;

    return 0;
}