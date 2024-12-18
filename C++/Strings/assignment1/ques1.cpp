#include<iostream>
using namespace std;
int main(){
    string str = "";
    int n;
    cout<<"Enter the size of the string : ";
    cin>>n;
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
    cout<<str<<endl;
    for(int i=0; i<n; i++){
        if(i%2==0) str[i] = '#';
        else continue;
    }
    cout<<str;
}