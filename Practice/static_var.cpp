#include<bits/stdc++.h>
using namespace std;

void show();
int main(){
    show();
    show();
    show();
    return 0;

}
void show(){

   static int x = 0;   //int x = 0; --> static int x = 0;
    cout << x << endl;
    x++;
}