#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5); // Default elements are 0
    // Taking Input when size is declared
    cout<<"Enter the Elements : ";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v2;
    //Taking Input when Size not Declared
    int n;
    cout<<"Enter the Size of Vector v2 : ";
    cin>>n;
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }


}