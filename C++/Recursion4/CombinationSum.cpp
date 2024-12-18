#include<iostream>
#include<vector>
using namespace std;
void combinationSum(int arr[], vector<int> ans, int target, int n, int idx){
    if(target==0){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx; i<n; i++){
        ans.push_back(arr[i]);
        combinationSum(arr,ans,target-arr[i],n,i);
        ans.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    vector<int> ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    combinationSum(arr,ans,target,n,0);
}