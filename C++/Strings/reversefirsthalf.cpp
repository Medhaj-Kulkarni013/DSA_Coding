#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    // take even input as length/size
    getline(cin,str);
    int n = str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
}