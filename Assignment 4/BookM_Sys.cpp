#include<bits/stdtr1c++.h>
using namespace std;
class Book{
    int bookId;
    string title;
    string author;
    float price;
    public:
    void input(){

        cout<<"Enter Book ID: ";
        cin>>bookId;

        cout<<"Enter Book Title: ";
        cin>>title;

        cout<<"Enter Book Author: ";
        cin>>author;

        cout<<"Enter Book Price: ";
        cin>>price;
        
    }
    void display(){

        cout<<"Book ID: "<<bookId<<endl;
        cout<<"Book Title: "<<title<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Book Price: "<<price<<endl;
    }
};
int main(){

    Book b[4];

    cout<<"Enter details of 4 books: \n";
    for(int i = 0; i < 4; i++){
        cout<<i+1;
        b[i].input();
    }

    cout<<"Book details are as follows: \n";
    for(int i = 0; i < 4; i++){
        
        b[i].display();
    }
    return 0;
}
