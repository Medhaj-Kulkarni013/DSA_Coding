#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
void reverse(vector<int>& a){
    for(int i=0,j=a.size()-1; i<=j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main(){
    int n;
    cout<<"Enter the size of Array/Vector : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    reversepart(0,3,v); // reverse array from 0th idx to 3rd idx
    display(v);
    reverse(v.begin(),v.end()); // IN Built Reverse Function
    display(v);
}