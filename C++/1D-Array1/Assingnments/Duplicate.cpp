#include<iostream>
#include<climits>
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
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        
    }
    if(flag==true) cout<<"Duplicate is Present";
    else cout<<"Duplicate is absent";
}