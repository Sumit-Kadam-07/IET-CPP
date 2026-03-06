#include<bits/stdc++.h>
using namespace std;

class Complex_no{
    int real, img;
    public:
    void accept(){
        cout<<"enter Real and Img no:"<<endl;
        cin>>real>>img;
    }
    void display(){
        cout<<"The Complex No is:"<<real<<"+"<<img<<"i"<<endl;
    }
    void setReal(int r){
        cout<<"setter fun called for setting real no to "<<r<<endl;
        real = r;
    }
    void setImg(int i){
        cout<<"setter fun called for setting ing no to "<<i<<endl;
        img = i;
    }
    int getReal(){
        return 0;

    }
    int getImg(){
        return 0;
    }
};

int main(){
    Complex_no c1;
    c1.accept();
    c1.display();
    c1.setReal(17);
    c1.display();
    c1.setImg(5);
    c1.display();
    int r = c1.getReal();
    cout<<" the Real no is:"<< r <<endl;
    int i = c1.getImg();
    cout<<"the Img no is:"<< i <<endl;
    return 0;

}