#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elments : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;
    for(int i=0; i<n; i++){
        if(mx<arr[i]){
            smx = mx;
            mx = arr[i];
        }
        else{
            smx = max(smx,arr[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(tmx<arr[i] && arr[i]!=smx && arr[i]!=mx){
            tmx = arr[i];
        }
    }
    cout<<"Maximum is "<<mx<<endl;
    if(smx==INT_MIN) cout<<"No 2nd max exists"<<endl;
    else cout<<"2nd max is "<<smx<<endl;
    if(tmx==INT_MIN) cout<<"No 3rd max exists"<<endl;
    else cout<<"3rd max is "<<tmx<<endl;

}