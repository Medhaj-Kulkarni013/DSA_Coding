#include<iostream>
#include<vector>
using namespace std;
void subsetArray(int arr[],int n,int idx,vector<int> ans){
    if(idx==n){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    // more understandable
    ans.push_back(arr[idx]); // include/uppend the num
    subsetArray(arr,n,idx+1,ans); // left call
    ans.pop_back(); // exclude the num
    subsetArray(arr,n,idx+1,ans); // right call
    // //less understandable
    // subsetArray(arr,n,idx+1,ans); 
    // ans.push_back(arr[idx]);
    // subsetArray(arr,n,idx+1,ans); // include/uppend
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    subsetArray(arr,n,0,ans);
}