#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter The Character : ";
    cin>>ch;
    if(64<(int)ch && (int)ch<91){
        cout<<ch<<" is an uppercase Alphabet";
    }
    else if(96<(int)ch && (int)ch<123){
        cout<<ch<<" is a lowercase Alphabet";
    }
    else{
        cout<<ch<<" is not an Alphabet";
    }

    return 0;
}