#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,10,12,15};
    int n = 10;
    int lo = 0;
    int hi = n-1;
    int idx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) lo = mid + 1;
        else{
            idx = mid;
            hi = mid - 1;
        }
    }
    cout<<idx;
}