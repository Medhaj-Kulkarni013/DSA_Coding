#include<iostream>
using namespace std;
int main(){
     int arr[] = {2,4,6,8,9,12,15,19,21,25};
    int n = 10;
    int target = 23;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<arr[lo];
}