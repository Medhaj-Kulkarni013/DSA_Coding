#include<bits/stdc++.h>
using namespace std;
void display(int a[]){      // int a[] == int *a
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){       // int b[] == int *b
    b[0] = 100;
}
int main(){
    int arr[5] = {1,4,2,7,88};
    display(arr);
    change(arr); // Array is pass by reference it will pass address of array
    display(arr);// i.e address of first element so swap can happen
    // you can pass the size of the array as well eg : display(arr,size/n/5);
    // void display(int a[] , int size) 
}