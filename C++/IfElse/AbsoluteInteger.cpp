#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if (n<0)
    {
        int x = -n;
        cout<<"The Absolute Value of "<<n<<" is "<<x;
    }
    else{
        cout<<"The Absolute Value of "<<n<<" is "<<n;
    }
    
    return 0;
}