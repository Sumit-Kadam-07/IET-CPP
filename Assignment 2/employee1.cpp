#include<bits/stdc++.h>
using namespace std;
string companyName = "Baap Company";
class Employee{
    public:
    int empId;
    double salary;
    string name;
    static int totalEmp;
    
    Employee(int id, string n, double s){
        empId = id;
        name = n;
        salary = s;

        totalEmp++;
    }
    void display(){
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Company: " << companyName << endl;
        
    }
    static void showTotalEmployees()
    {
        cout << "Total Employees: " << totalEmp << endl;
    }
};
int Employee::totalEmp = 0;
int main(){
Employee e[5] = {
    Employee(101, "Rahul", 50000),
    Employee(102, "Priya", 60000),
    Employee(103, "Amit", 55000),
    Employee(104, "Neha", 65000),
    Employee(105, "Rohit", 70000)
};
cout << " Displaying Emp Data "<<endl;
    for (int i = 0; i < 5; i++) {
        e[i].display();
    }
Employee::showTotalEmployees();
return 0;


}