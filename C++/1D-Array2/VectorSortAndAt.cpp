#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the Size : ";
    cin>>n;
    cout<<"Enter the Array Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.at(2) = 6; // 2nd index element is now 6
    v.at(4) = 1;
    v.at(0) = 9;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}