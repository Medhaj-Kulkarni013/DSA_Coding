#include<iostream>
using namespace std;
// int* ptr declaration is more correct way
int main(){
    int x = 5;
    cout<<&x<<endl;// using '&' will print its address
    int *p = &x; // Pointer P storing address of variable x
// '*' here is also known as dereference operator
    cout<<p<<endl; // Address of variable x will be printed same as &x
    cout<<*p<<endl; // *p will give value at address stored at p i.e x==5
    *p = 10; // x has been updated here to 10
    cout<<x;
    //cout<<&p<<endl; // This will give address of pointer p
}