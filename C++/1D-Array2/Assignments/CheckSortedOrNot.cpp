#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elments : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) flag = false;
    }
    if(flag==true) cout<<"Array is Sorted";
    else cout<<"Array is not Sorted";
}