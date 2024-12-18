#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int target;
    cout<<"Enter the target u wish to search : ";
    cin>>target;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"The target is present";
    else cout<<"Target is absent";
}