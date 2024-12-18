#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 99;
}
void change2D(int arr[3][2]){ // size(atleast coloumn size) is needed to be mentioned incase of 2D Arrays
    arr[1][0] = 100;          // unlike 1D Array
}
int main(){
    int a[3] = {4,5,6};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;

    int arr[3][2] = {{1,2},{3,4},{5,6}};
    cout<<arr[1][0]<<endl;
    change2D(arr);
    cout<<arr[1][0]<<endl;
}