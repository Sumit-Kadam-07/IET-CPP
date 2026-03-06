#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    int roll;
    int dd, mm, yy; // date of birth
    float marks;

    // Default constructor
    Student() {
        roll = 0; dd = mm = yy = 0; marks = 0;
    }

    // Parameterized constructor
    Student(int r, int d, int m, int y, float mk) {
        roll = r;
        dd = d;
        mm = m;
        yy = y;
        marks = mk;
    }

    void display() {
        cout << "Roll: " << roll << " | DOB: " << dd << "/" << mm << "/" << yy<< " | Marks: " << marks << endl;
    }
    void displayRoll(){
        cout<<"Roll no are:"<<roll<<endl;
    }
};
    
int main(){
    Student s[10] = {
        Student(3, 5, 6, 2005, 88),
        Student(1, 12, 1, 2004, 92),
        Student(8, 23, 9, 2006, 75),
        Student(5, 1, 3, 2005, 81),
        Student(2, 10, 10, 2004, 95),
        Student(7, 2, 8, 2006, 60),
        Student(9, 18, 12, 2005, 85),
        Student(4, 30, 11, 2004, 90),
        Student(6, 15, 5, 2005, 70),
        Student(10, 20, 7, 2006, 65)
    };
    cout << " Displaying Student Data "<<endl;
    for (int i = 0; i < 10; i++) {
        s[i].display();
    }
    //cout<<sizeof(s[10]);
    s[7].display();
    for( int i = 3; i < 7; i++){
        s[i].displayRoll();
    }
    
    return 0;
}