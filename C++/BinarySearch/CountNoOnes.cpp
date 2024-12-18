#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,0,0,1,1,1,1,1,1};
    int n = 13;
    int lo = 0;
    int hi = n-1;
    int idx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==1){
            if(arr[mid-1]!=1){
                idx = mid;
                break;
            }
            else hi = mid - 1;
        }
        else if(arr[mid]<1) lo = mid + 1;
        else hi = mid - 1;
    }
    if(idx!=-1) cout<<"Num of 1 are "<<n-idx;
    else cout<<0;
}