#include<iostream>
#include<vector>
using namespace std;
void subSequence(int arr[], int n, vector<int> ans, int idx, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0; i<k; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    subSequence(arr,n,ans,idx+1,k);
    ans.push_back(arr[idx]);
    subSequence(arr,n,ans,idx+1,k);
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    int k = 2;
    subSequence(arr,n,ans,0,k);
}