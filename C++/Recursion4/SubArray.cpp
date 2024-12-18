#include<iostream>
#include<vector>
using namespace std;
void subArray(int arr[], vector<int> ans, int n, int idx){
    if(idx==n){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subArray(arr,ans,n,idx+1);
    if(ans.size()==0 || ans[ans.size()-1]==arr[idx-1]){
        ans.push_back(arr[idx]);
        subArray(arr,ans,n,idx+1);
        // ans.pop_back();
    }
    // subArray(arr,ans,n,idx+1);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    subArray(arr,ans,n,0);
}