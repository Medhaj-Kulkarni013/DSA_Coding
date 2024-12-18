#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Year : ";
    cin>>n;
    if (n%4==0 && n%100!=0)
    {
        cout<<"Its a Leap Year";
    }
    else if(n%400==0)
    {
        cout<<"Its a Leap Year";
    }
    else{
        cout<<"Its not a Leap Year";
    }
    
    return 0;
}