#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    if ((64<(int)ch && (int)ch<91) || (96<(int)ch && (int)ch<123))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            cout<<ch<<" is a vowel";
        else
            cout<<ch<<" is a consonent";
    }
    else
        cout<<ch<<" is not an alphabet";

        return 0;
    
}