#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0, digit;
    cout<<"Enter the Num: ";
    cin>>n;

    while(n > 0){

        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
cout<<sum;

}