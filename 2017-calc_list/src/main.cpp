#include <iostream>
#include <list>

int main() {
    std::list<int> listNum = {5, 3, 1, 5, 7};
    int sum = 0;

    for (auto it = listNum.begin(); it != listNum.end(); ++it) {
        sum += *it;
    }

    std::cout << sum << std::endl;

    return 0;
}
