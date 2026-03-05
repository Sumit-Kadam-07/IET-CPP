#include<bits/stdc++.h>
using namespace std;
class MyDate{

    private:
    int day, month, year;
    public:
    void accept(){
        cout<<"\n Accept Date, Month, Year"<<endl;
        cin>>day>>month>>year;
    }
    void display(){
        cout<<"Date is :"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void setDay(int d){
        cout<<"setter fun is called:"<<endl;
        day = d;
    }
    void setMonth(int m){
        cout<<"setter fun is called:"<<endl;
        month = m;
    }
    void setYear(int y){
        cout<<"setter fun is called:"<<endl;
         year = y;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
    int getYear(){
        return year;
    }
   
};
int main(){

    MyDate d1;
    cout<<"Size of object d1 is:"<<sizeof(d1);
    d1.accept();
    d1.display();
    d1.setDay(28);
    d1.display();
    d1.setMonth(03);
    d1.display();
    int m = d1.getMonth();
    cout<<"current month is:"<<m<<endl;
    int y = d1.getYear();
    cout<<"current year is:"<<y<<endl;
    int d = d1.getDay();
    cout<<"current day is:"<<d<<endl;

    return 0;


}