#include<bits/stdc++.h>
using namespace std;
class Calculator{

    float num1, num2;
    public:

    void input(){

        cout<<"Enter first No: ";
        cin>>num1;
        cout<<"Enter second No: ";
        cin>>num2;
    }

    void add(){
        cout<<"Addition of first No and second No is: "<<num1 + num2<<endl;
    }
    void subtract(){
        cout<<"Subtraction of first No and second No is: "<<num1 - num2<<endl;
    }
    void multiply(){
        cout<<"Multiplication of first No and second No is: "<<num1 * num2<<endl;
    }
    void divode(){
        if(num2 != 0){
        cout<<"Division of first No and second No is: "<<num1 / num2<<endl;
        }
        else{
            cout<<" Division is not possible"<<endl;
        }
    }
    void square(){
        cout<<"Square of first No is: "<<num1 * num2<<endl;
        cout<<"Square of second No is: "<<num2 * num2<<endl;
    }

};
int main(){

    Calculator c;

    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divode();
    c.square();
    return 0;
}
