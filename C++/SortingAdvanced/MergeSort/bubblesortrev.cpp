#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}