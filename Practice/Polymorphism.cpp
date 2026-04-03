#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout << "Parent class\n";
    }
    virtual void hello(){
        cout << "Hello from parent\n";
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout << "Child class\n";
    }
    void hello(){
        cout << "Hello from child\n";
    }
};
int main(){
    Parent p1;
    p1.hello();
    Child c1;
    c1.hello();
}
