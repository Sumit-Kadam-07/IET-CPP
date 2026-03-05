#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {12, 2, 85, 38, 4};
    int larg = 0;

    for(int i = 0; i < 5; i++){

        if(arr[i] > larg){
            larg = arr[i];
        }
    }
    cout<<"largest ele is: "<<larg;
    return larg;
}