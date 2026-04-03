#include <iostream>
using namespace std;

class SortArray {
    int arr[10];

public:
    void acceptInput() {
        cout << "Enter 10 elements:" << endl;
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void sortArray() {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    void displayArray() {
        cout << "Sorted Array (Ascending Order):" << endl;
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    SortArray obj;
    obj.acceptInput();
    obj.sortArray();
    obj.displayArray();
    return 0;
}