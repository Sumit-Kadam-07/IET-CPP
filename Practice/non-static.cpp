#include<bits/stdc++.h>
using namespace std;
class temp{
    int z; //instance var
    static int y;//static var
    public:
    temp();
    void show();
    void display();

};
int x; //global var
int temp :: y;
void temp :: show(){
    y++;
}
temp :: temp(){
    int z= 200;
    x = 100;
    cout<<"Value of z is:"<<z<<endl;
}
void temp :: display(){
    cout<<"Value of x:"<<x<<endl;
    cout<<"value of y is:"<<y<<endl;
}
int main(){

    temp t;
    t.show();
    t.show();
    t.display();
    cout<<sizeof(t);
    return 0;
}