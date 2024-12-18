// product of 2 num using pointers
#include<iostream>
using namespace std;
int Product(int *p1,int *p2){
    int x=(*p1)*(*p2);
    return x;
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<"Product of a & b is : "<<Product(ptr1,ptr2);
}