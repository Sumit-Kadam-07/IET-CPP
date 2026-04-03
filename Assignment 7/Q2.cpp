#include <iostream>
using namespace std;

class FindFactorial {
    int num;
    long long fact;

public:
    void acceptNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void calculateFactorial() {
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
    }

    void displayResult() {
        cout << "Factorial = " << fact << endl;
    }
};

int main() {
    FindFactorial obj;
    obj.acceptNumber();
    obj.calculateFactorial();
    obj.displayResult();
    return 0;
}