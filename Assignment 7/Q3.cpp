#include <iostream>
using namespace std;

class DecimalToBinary {
    int num;
    int binary[32], i;

public:
    void convert() {
        cout << "Enter decimal number: ";
        cin >> num;

        i = 0;
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
    }

    void display() {
        cout << "Binary equivalent: ";
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }
};

int main() {
    DecimalToBinary obj;
    obj.convert();
    obj.display();
    return 0;
}