#include<bits/stdc++.h>
using namespace std;
class String1{

    char* ptr;
    int len;
    public:

    String1()
  {
    len=1;
    ptr=new char[len];
    *ptr='A';
  }  
  void display()
  {
    if(len==1){
    
    cout<<"length is "<<len<<endl;
    cout<<"character is "<<*ptr<<endl;
    }
  else
  {
    cout<<"length is "<<len<<endl;
    cout<<"character is "<<ptr<<endl;
  }
  }
  String1(char * sptr)
  {
    len=strlen(sptr);
    ptr = new char[len+1];
    strcpy(ptr,sptr);
  }
};
int main(){

    String1 s1;
    s1.display();
    String1 c2("rohit");
    c2.display();

}