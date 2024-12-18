#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array/Vector : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"Enter the Target : ";
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
}