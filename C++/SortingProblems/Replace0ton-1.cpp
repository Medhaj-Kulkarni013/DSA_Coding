#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int i : arr) cout<<i<<" ";
    cout<<endl;
    vector<int> v(n,0); // 0 means not visited
    int count = 0;
    for(int i=0; i<n; i++){
        int minidx = -1;
        int min = INT_MAX;
        for(int j=0; j<n; j++){
            if(v[j]==1) continue; // 1 means visited
            else{
                if(min>arr[j]) {
                    min = arr[j];
                    minidx = j;
                }
            }
        }
        v[minidx] = 1;
        arr[minidx] = count;
        count++;
    }
    for(int i : arr) cout<<i<<" ";
}