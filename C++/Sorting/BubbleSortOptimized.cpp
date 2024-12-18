#include<iostream>
using namespace std;
int main(){
   int arr[6] = {13,46,24,50,20,9};
    int n = 6;
    for(int i=n-1; i>=0; i--){
        bool flag = true;        
        for(int j=0; j<i; j++){ 
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";  
    }
}