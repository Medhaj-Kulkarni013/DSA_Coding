#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
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
    display(v);
    // int i=0;  // i & j are two pointers 
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    for(int i=0,j=v.size()-1; i<j; i++,j--){
        // int temp = v[i];
        // v[i] = v[j];
        // v[j] = temp;
        swap(v[i],v[j]);
    }
    display(v);
}