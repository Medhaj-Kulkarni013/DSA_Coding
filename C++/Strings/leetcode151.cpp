#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "the sky is blue";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    cout<<s.substr(11,4)<<endl;
    //reverse(s.begin(),s.end());
    cout<<s;
}