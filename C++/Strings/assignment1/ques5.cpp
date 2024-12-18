#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n = str.length();
    int num = 0;
    for(int i=0; i<n; i++){
        num *= 10;
        num += (str[i]-48);
    }
    cout<<num;
}