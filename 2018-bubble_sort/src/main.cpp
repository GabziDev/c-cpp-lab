#include <iostream>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // nombre d'element dans le tableau

    std::cout << "\nAvant : ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    // tri à bulles
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "\nAprès : ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}