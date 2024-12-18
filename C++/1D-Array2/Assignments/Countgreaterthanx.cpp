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
    int x;
    cout<<"Enter the number x : ";
    cin>>x;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count++;
    }
    cout<<"Num of Elements greater than "<<x<<" are "<<count;
}