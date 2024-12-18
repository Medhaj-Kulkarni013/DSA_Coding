#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    // int arr[5];
    // cin>>arr[0];
    // cin>>arr[1];
    // cin>>arr[2];
    // cin>>arr[3];
    // cin>>arr[4];
    // Input
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
