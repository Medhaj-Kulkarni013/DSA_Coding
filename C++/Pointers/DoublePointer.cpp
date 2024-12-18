// To store address of a pointer
#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int *ptr = &x;
    int **ptr2 = &ptr; // double pointer
    cout<<ptr<<endl; // x cha address
    cout<<ptr2<<endl; // ptr cha address
    cout<<*ptr2<<endl; // x cha address
    cout<<**ptr2<<endl; // x chi value 7
    cout<<*ptr<<endl;
    cout<<x<<endl;

}