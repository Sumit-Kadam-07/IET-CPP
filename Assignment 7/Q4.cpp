#include <iostream>
using namespace std;

class HollowSquare {
    int n;

public:
    void accept() {
        cout << "Enter value of n: ";
        cin >> n;
    }

    void printPattern() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
};

int main() {
    HollowSquare obj;
    obj.accept();
    obj.printPattern();
    return 0;
}