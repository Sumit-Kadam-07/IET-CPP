#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, fact = 1;
    cout << " Enter the No: ";
    cin >> num;

    for(int i = 1; i <= num; i++){

        fact = i * fact;
    }
    cout << "Factorial is: " << fact;
}