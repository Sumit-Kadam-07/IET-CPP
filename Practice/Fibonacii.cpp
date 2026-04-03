#include<bits/stdc++.h>
using namespace std;
int main(){

    int num,  a = 0, b = 1, c;

    cout << "Enter the No: ";
    cin >> num;
    cout << a <<" " << b << " ";
    for(int i = 3; i <= num; i++){

        c = a + b;
        cout << c << " ";

        a = b;
        b = c;
    }
    return 0;
}