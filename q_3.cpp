#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
