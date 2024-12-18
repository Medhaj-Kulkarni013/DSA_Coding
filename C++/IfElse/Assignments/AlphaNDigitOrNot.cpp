#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122))
        cout<<ch<<" is an Alphabet";
    else if(((int)ch>=48 && (int)ch<=57))
        cout<<ch<<" is a Number";
    else
        cout<<ch<<" is a Special Character";
}