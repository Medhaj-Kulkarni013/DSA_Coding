#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Vector/Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a;
    cout<<"Enter the num whose occurance at last index u wish to find : ";
    cin>>a;
    int idx = -1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==a){
            idx = i;
            break;
        } 
    }
    cout<<"The last index at which "<<a<<" is found is "<<idx;
}