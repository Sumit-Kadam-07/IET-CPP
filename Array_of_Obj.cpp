#include<bits/stdc++.h>
using namespace std;
class Employee{

    int id;
    char name[30];
    public:
      void getdata();
      void putdata();
};
void Employee::getdata(){
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter Name: ";
    cin>>name;
}
void Employee::putdata(){
    cout<<id;
    cout<<name;
    cout<<endl;
}
int main(){

    Employee emp[30];
    int n;
    cout<<"Enter the employee present today: ";
    cin>>n;
    
    for(int i = 0; i < n; i++)
        emp[i].getdata();

        cout<<"Employee Data: ";
        
    for(int i = 0; i < n; i++)
        emp[i].putdata();    

    
}

