#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,8,9,10}; // size is automatically considered to be 6
    cout<<arr[0]<<" "; // indexing starts from 0
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<arr[5]<<" ";
    cout<<endl;
    // Method 2
    int brr[5]; // size is declared there itself which is 5
    brr[0] = 1; // values intialised using index
    brr[1] = 2;
    brr[2] = 3;
    brr[3] = 4;
    brr[4] = 5;
    cout<<brr[0]<<" "; // indexing starts from 0
    cout<<brr[1]<<" ";
    cout<<brr[2]<<" ";
    cout<<brr[3]<<" ";
    cout<<brr[4]<<" ";
}
