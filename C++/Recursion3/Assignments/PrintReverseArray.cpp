#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void printRev(int arr[], int n, int idx){
    if(idx==n) return;
    printRev(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int arr[] = {7,9,4,6,8,12,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printRev(arr,n,0);
}