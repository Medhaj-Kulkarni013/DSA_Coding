#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Marks : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Roll no. of failed students are : ";
    for(int i=0; i<n; i++){
        if(arr[i]<35) cout<<i<<" ";
    }

}
