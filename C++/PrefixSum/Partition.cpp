#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Prefix Sum Array
    for(int i=1; i<n; i++) arr[i] += arr[i-1];
    bool flag = true;
    for(int i=0; i<n; i++){
        if(2*arr[i]==arr[n-1]){
            flag = false;
            break;
        }
    }
    if(!flag) cout<<"Yes it can be partitioned.";
    else cout<<"No it cannot be partitioned";
}