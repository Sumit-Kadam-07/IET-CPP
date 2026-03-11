#include<bits/stdtr1c++.h>
using namespace std;
class Demo{

    int* ptr;
    public:

    Demo(){

        cout<<"constructor is called\n";
        ptr = new int;
        *ptr = 10;
    }
    void display(){

        cout<<"value of attribute *ptr: "<<*ptr<<endl;

    }
    ~Demo(){

        cout<<"destructor is called\n";
        delete ptr;
    }
};
int main(){

    Demo obj1;
    obj1.display();
    return 0; 
}