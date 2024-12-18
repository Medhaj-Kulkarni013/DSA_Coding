#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the Vector size : ";
    cin>>n;
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    int count = 0;
    cout<<"Enter the Target : ";
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(v[i]+v[j]+v[k]==target) count++;
            }
        }
    }
    cout<<"The number of triplets whose sum is equal to target are : "<<count;
}