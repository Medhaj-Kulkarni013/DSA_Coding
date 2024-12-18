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
    int SumE = 0;
    int SumO = 0;
    for(int i=0; i<n; i++){
        if(i%2==0) SumE += arr[i];
        else SumO += arr[i];
    }
    cout<<"The Difference betn SumE - SumO = "<<SumE-SumO;
}