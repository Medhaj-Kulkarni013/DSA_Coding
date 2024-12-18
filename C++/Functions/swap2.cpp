#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b; // Swapping number without using extra variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}