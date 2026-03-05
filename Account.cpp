#include<bits/stdc++.h>
using namespace std;

class Account{

    int accno, balance;
    public:
    void accept(){
        cout<<"Enter Acc No:"<<endl;
        cin>>accno;
        cout<<"Enter Balance:"<<endl;
        cin>>balance;
    }
    void display(){
        cout<<"Acc No is:"<<accno<<endl;
        cout<<"Balance is:"<<balance<<endl;
    }
    void withDraw(int amt){
        if(amt < balance){
            balance = balance - amt;
        
        cout<<"balance is :"<<balance<<endl;
        }

    }
    void deposit(int amt, int accno1){
        cout<<"Enter ACC No:"<<endl;
        cin>>accno1;
        if(accno == accno1){
            balance = amt + balance;
            cout<<" Current Balance is : "<< balance <<endl;
        }else{
        cout<<"Wrong Acc No"<<endl;
        }
    }
};

int main(){
    Account a1;
    a1.accept();
    a1.display();
    a1.withDraw(200);
    a1.display();
    a1.deposit(300, 100);
    a1.display();

    return 0;

}