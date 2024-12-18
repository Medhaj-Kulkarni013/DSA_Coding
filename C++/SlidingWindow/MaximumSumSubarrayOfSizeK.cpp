#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = arr[0];
    int maxIdx = -1;
    // Time Complexity = O(n*k) Brute Force
    // for(int i=0; i<=n-k; i++){
    //     int sum = 0;
    //     for(int j=i; j<i+k; j++){
    //         sum += arr[j];
    //     }
    //     if(sum>maxSum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }

    // Sliding Window Code T.C = O(n)/O(n+k);
    int i = 1;
    int j = k;
    int prevSum = 0;
    for(int i=0; i<k; i++) prevSum += arr[i];
    maxSum = prevSum;
    while(j<n){
        prevSum = prevSum + arr[j] - arr[i-1];
        if(prevSum > maxSum){
            maxSum = prevSum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
}