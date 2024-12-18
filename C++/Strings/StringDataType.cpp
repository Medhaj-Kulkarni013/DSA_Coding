#include<iostream>
using namespace std;
int main(){
    string str = "Medhaj Kulkarni";
    cout<<str<<endl;
    cout<<str[0]<<endl;
    string s;
    // cin>>s; use cin when there are no spaces orelse use getline
    // cout<<s<<endl;
    getline(cin,s); 
    cout<<s<<endl;
}