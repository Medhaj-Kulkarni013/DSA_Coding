#include<iostream>
using namespace std;
int main(){
    // int x = 9;
    // int *ptr = &x;
    // cout<<ptr<<endl; // 0x61ff08
    // cout<<*ptr<<endl; // 4 i.e value of x
    // ptr = ptr + 1;  // address moved by 4 bytes
    // cout<<ptr<<endl; // 0x61ff0c
    // cout<<*ptr<<endl; // garbage value 6422284

    bool flag = true;
    bool *ptr = &flag;
    cout<<ptr<<endl; // 0x61ff0b
    cout<<*ptr<<endl; // 1
    ptr++; // address moved by 1 byte
    cout<<ptr<<endl; // 0x61ff0c
    cout<<*ptr; // 12

}