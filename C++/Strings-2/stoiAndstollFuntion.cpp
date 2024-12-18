#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "12345";
    int x = stoi(s);
    cout<<x<<endl;
    cout<<x+1<<endl;
    string s2 = "12345678901234";
    long long y = stoll(s2);
    cout<<y<<endl;
}