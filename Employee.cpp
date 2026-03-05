#include<bits/stdc++.h>
using namespace std;
class Emp{
    int Empid, Empsal;
    public:
    Emp(){

        cout<<"This is Non-Arg constructor"<<endl;
    }
    Emp(int id, int sal){

        Empid = id;
        Empsal = sal;
    }
    void display(){
        cout<<"the emp id & sal is:"<<Empid<<", "<<Empsal<<endl;
    }

};
int main(){

    Emp e1(100, 200);
    e1.display();
    return 0;
}