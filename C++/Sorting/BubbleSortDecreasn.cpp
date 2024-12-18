#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,100,4,5,99};
    int n = 7;
    for(int i=n-1; i>=0; i--){
        bool flag = true;
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
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