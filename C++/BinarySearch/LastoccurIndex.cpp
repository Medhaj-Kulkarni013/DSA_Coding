#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,5,5,5,5,5,6,7,8,8};
    int n = 16;
    int lo = 0;
    int hi = n-1;
    int x = 3;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                cout<<"Last occurance of "<<x<<" is at "<<mid<<" index";
                break;
            }
            else lo = mid + 1;
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
}