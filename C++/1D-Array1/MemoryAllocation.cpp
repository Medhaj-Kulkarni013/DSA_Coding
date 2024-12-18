#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl; // address of arr = address of 1st element of arr
// also writing &arr is not necessary only arr will also give address but this 
// doesnt apply for arr[i] addresses 
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    // 0x61fefc Continuous memory allocation 
    // 0x61ff00 every address is present at a difference of 4 byte
    // 0x61ff04 4 byte = int size
    // 0x61ff08
    // 0x61ff0c

}