#include<bits/stdc++.h>
using namespace std;
void swap(int&, int&);
int main(){
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"Before swapping value of a and b: "<<endl;
    cout<<"value of a = "<<a<<" value of b = "<<b<<endl;
    swap(a,b);
    cout<<"After calling swap() value of a and b: "<<endl;
    cout<<"value of a = "<<a<<" value of b = "<<b<<endl;
}
void swap(int& p, int& q){
    int x = 100, y = 200;
    int temp = p;
    p = q;
    q = temp;
    cout<<"After swaping value of p and q: "<<endl;
    cout<<"value of p = "<<p<<" value of q = "<<q<<endl;
    
}

