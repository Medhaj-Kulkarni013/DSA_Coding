#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prev[n];
    int min = arr[0];
    prev[0] = -1;
    for(int i=1; i<n; i++){
        prev[i] = min;
        if(min>arr[i]) min = arr[i];
    }
    for(int ele : prev) cout<<ele<<" ";
}