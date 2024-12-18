#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int minInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MAX;
    return min(arr[idx],minInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {7,9,4,6,8,12,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minInArray(arr,n,0);
}