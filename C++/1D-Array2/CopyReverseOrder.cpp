#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the Size of Array/Vector : ";
    cin>>n;
    vector<int> v1;
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Elements in V1 are : ";
    display(v1);
    vector<int> v2(n);
    for(int i=0; i<n; i++){
        v2[i] = v1[n-1-i]; // can use extra variable as well
    }                      // int a=n; v2[i] = v1[a-1]; a--;
    cout<<"Elements in V2 are : ";
    display(v2);
    
}