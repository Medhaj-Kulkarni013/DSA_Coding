#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int a=1,b=1;
    int sum = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
        cout<<sum<<" ";
    }
}