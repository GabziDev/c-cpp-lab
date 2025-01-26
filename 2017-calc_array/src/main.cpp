#include <iostream>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    std::cout << sum << std::endl;

    return 0;
}