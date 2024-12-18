#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<"Sum of all the elements in array is : "<<sum;
}