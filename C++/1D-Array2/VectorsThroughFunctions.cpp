#include<bits/stdc++.h>
using namespace std;
void change(vector<int>& v){ // Use '&' to make it pass by referance
    v[0] = 99;
}
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
    cout<<"Elements are : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    change(v);
    cout<<endl;
    cout<<"Changed Elements are : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}