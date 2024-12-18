#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,4,0,0,3,0,5,1,0};
    int n = 10;
    // int i = 0;
    int j = 0;
    // while(i<n && j<n){
    //     if(arr[i]!=0) i++;
    //     else if(arr[j]==0) j++;
    //     else if(arr[i]==0 && arr[j]!=0){
    //         if(j>i){
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //         else j++;
    //     }
    // }
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}