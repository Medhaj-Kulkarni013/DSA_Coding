#include<iostream>
using namespace std;
int printIndex(int arr[], int n, int x, int idx){
    if(idx==n) return -1;
    if(arr[idx]==x) return idx;
    return printIndex(arr,n,x,idx+1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<printIndex(arr,n,3,0);
}