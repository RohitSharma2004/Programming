#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int rev[size];

    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - i - 1];
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = rev[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}
