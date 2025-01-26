#include <iostream>

int main() {
    int array[] = {132, 23, 34, 423, 5, 63, 7, 85};
    int max = 0;
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    std::cout << "List : ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\nMax : " << max;

    return 0;
}