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
    for(int i=0; i<n; i++){ // 2 1 2 5 3
        bool flag = false;
        for(int j=0; j<n; j++){
            if(v[i]==v[j] && i!=j){
                flag = true;
                break;
            }
        }
        if(flag==false) {
            cout<<"The 1st non repeating element is : "<<v[i];
            return 0;
        }
    }
    cout<<"No Non Repeating element exists";
    
}