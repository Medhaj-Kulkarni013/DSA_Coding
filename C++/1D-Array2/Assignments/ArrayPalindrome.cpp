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
    for(int i=0,j=n-1; i<=j; i++,j--){
        if(arr[i]!=arr[j]){
             flag = false;
             break;
        }
    }
    if(flag==true) cout<<"Palindrome";
    else cout<<"NOT Palindrome";
}