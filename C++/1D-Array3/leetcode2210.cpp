#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(6);
    nums.push_back(6);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(1);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" "; // 6 6 5 5 4 1 
    }
    cout<<endl;
    // Size of vector remains same so after duplicates are removed
    // rest of the elements still remain at the end.
    // int j = 1;
    // for(int i=1; i<nums.size(); i++){
    //     if(nums[i-1]!=nums[i]){
    //         nums[j] = nums[i];
    //         j++;
    //     }
    // }
    // SO USE EXTRA ARRAY TO SOLVE THIS PROBLEM
    vector<int> v;
    v.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]!=nums[i]){
            v.push_back(nums[i]);
        }
    }
    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" "; // 6 5 4 1 4 1
    // }                       // duplicates are removed but since size remains same i.e 6
                            // and is not reduced to 4 last 2 elements remain there
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";    // 6 5 4 1
    }                    
}   
                          
