#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>

using namespace std;
int main(){
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter Elements:\n";
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

//Push Back
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    
    for( int val : vec){
        cout << val << " ";
    }
    cout << endl;

//Pop Back    
    vec.pop_back();
    for( int val : vec){
        cout << val << " ";
    }
    cout << endl;
//Size & Capacity
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << endl;

//change val using ref
    for(int &val : vec){
        val = val + 1;
        cout << val << " ";
    }
    cout << endl;

//indexing
    cout << "Val at index 3: " << vec[3] << "or" << vec.at(3) << endl;
//front and back 
    cout << "Front Ele is: " << vec.front() << endl;
    cout << "Back Ele is: " << vec.back() << endl;

// vector

vector <string> str = {"gg", "dd", "kk", "ee"};
for (string val : str){
    cout << val << " ";
}
cout << endl;
vector <float> flo(4, 4.5f);
for(float val : flo){
    cout << val << " ";
}
cout << endl;
vector <int> vec1(vec);
for( int val : vec1){
        cout << val << " ";
    }

//Erase fun


    return 0;
}