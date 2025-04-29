#include <iostream>
using namespace std;

void removeByIndex(int arr[], int &size, int index) {

    if (index < 0 || index >= size) {
        cout << "Invalid index" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    removeByIndex(arr, size, 4);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
