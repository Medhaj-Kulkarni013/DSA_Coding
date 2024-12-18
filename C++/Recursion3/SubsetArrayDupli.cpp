#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsetDup(vector<int>& arr, int idx, vector<int> ans, bool flag){
    if(idx==arr.size()){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int x = arr[idx];
    int y = -1;
    if(idx<arr.size()-1) y = arr[idx+1];
    if(x==y){
        subsetDup(arr,idx+1,ans,false); // left call
        ans.push_back(arr[idx]);
        if(flag==true) subsetDup(arr,idx+1,ans,true); // right call i.e uppended call
    }
    else{
        subsetDup(arr,idx+1,ans,true);
        ans.push_back(arr[idx]);
        if(flag==true) subsetDup(arr,idx+1,ans,true);
    }
}
int main(){
    vector<int> arr = {1,2,2}; // sorted
    vector<int> ans;
    subsetDup(arr,0,ans,true);
}