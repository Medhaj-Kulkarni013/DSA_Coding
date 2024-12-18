#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
// int sumOfEle(int arr[], int n, int idx){
//     if(idx==n-1) return arr[n-1];
//     return arr[idx]+sumOfEle(arr,n,idx+1);
// }
int sumOfEle2(int arr[], int n, int idx, int sum){
     if(idx==n) return sum;
     sum += arr[idx];
     return sumOfEle2(arr,n,idx+1,sum);
 }
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<sumOfEle(arr,n,0);
    cout<<sumOfEle2(arr,n,0,0);
}