#include<bits/stdtr1c++.h>
using namespace std;
int main(){


    int n, rev = 0, orig;
    cout << " Enter tne Num: ";
    cin >> n;
    
    orig = n;
    while(n != 0){

        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
         
    }
    if(orig == rev){
        cout << "Is Palindrome";
    }
    else
        cout << " Is not a Palindrome";
    
    return 0;
}