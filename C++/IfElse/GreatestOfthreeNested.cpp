#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Three Numbers : ";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        cout<<"The Greatest Number is "<<a;
        else
        cout<<"The Greatest Number is "<<c;
        
    }
    else{
        if (b>c)
        cout<<"The Greatest Number is "<<b;
        else
        cout<<"The Greatest Number is "<<c;
    
    }
    return 0;
}