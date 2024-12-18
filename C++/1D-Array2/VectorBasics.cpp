#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v[0]<<endl; // accessing and printing using []
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<endl;
    v[2] = 9; // updation using []
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<endl;
    // Vector empty ans back stl
    cout<<v.back()<<endl; // prints last element of vector
    // to check if vector is empty or not 
    if(v.empty()) cout<<1;
    else cout<<0;
}