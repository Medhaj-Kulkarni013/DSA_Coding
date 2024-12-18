#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    int min = INT_MAX; // OR min = arr[0];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum element in array is : "<<min;
}