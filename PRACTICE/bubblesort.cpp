#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,7,9,4,5,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=n-1; i>=0; i--){
        bool flag = true;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}