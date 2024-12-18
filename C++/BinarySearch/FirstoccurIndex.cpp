#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,3,3,3,4,4,4,4,5,5,6};
    int n = 15;
    int lo = 0;
    int hi = n-1;
    int x = 3;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                cout<<"first occurance of "<<x<<" is at "<<mid<<" index";
                break;
            }
            else hi = mid - 1;
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
}