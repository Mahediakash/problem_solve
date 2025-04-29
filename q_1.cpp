#include <iostream>
using namespace std;

void InsertElement(int arr[], int &size, int index, int element){
    if (index < 0 || index > size) {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = element;
    size++;

}

void printElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size = 5;
    int arr[10] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    printElement(arr, size);

    int element, index;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter index to insert at: ";
    cin >> index;

    InsertElement(arr, size, index, element);

    cout << "Array after insertion: ";
    printElement(arr, size);

    return 0;
}