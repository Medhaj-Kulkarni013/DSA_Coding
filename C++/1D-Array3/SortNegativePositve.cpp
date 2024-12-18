#include<bits/stdc++.h>
using namespace std;
display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
// 2 pass
sortponi(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        if(v[i]>0) i++;
        if(v[j]<0) j--;
        else if(v[i]<0 && v[j]>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortponi(v);
    display(v);
}