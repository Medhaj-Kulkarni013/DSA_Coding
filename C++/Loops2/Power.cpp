#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Base : ";
    cin>>a;
    cout<<"Enter Power : ";
    cin>>b;
    float product = 1;
    bool flag = true; // true when b is +ve
    if(b<0)
    {
        flag = false;
        b = -b;
    }

    for(int i=1; i<=b; i++)
    {
        product *= a;
    }

    if(flag==false)
    {
        b = -b;
        cout<<a<<" raised to power "<<b<<" is : "<<1/product;
    }
    else{
    cout<<a<<" raised to power "<<b<<" is : "<<product;
    }
}