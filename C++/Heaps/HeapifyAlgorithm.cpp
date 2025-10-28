#include<iostream>
using namespace std;
void heapify(int idx, int arr[], int n){
    // pop function of minHeap;
    int i = idx;
    while(true){
        int l = 2*i+1; // 2*i -> 2*i+1 since there is 0 based indexing this time
        int r = 2*i+2;
        int minIdx = i;

        if(l<n && arr[minIdx] > arr[l]) minIdx = l;
        if(r<n && arr[minIdx] > arr[r]) minIdx = r;

        if(minIdx!=i){
            swap(arr[minIdx],arr[i]);
            i = minIdx;
        }
        else break;
    }
}
int main(){
    // converting array to minHeap
    int arr[] = {10,2,14,11,1,4}; // 0 based indexing this time
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=(n/2)-1; i>=0; i--){
        heapify(i,arr,n);
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;    
}