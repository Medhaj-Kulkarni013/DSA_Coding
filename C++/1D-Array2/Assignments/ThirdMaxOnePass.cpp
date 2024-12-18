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
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            tmax = smax;
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
            tmax = smax;
            smax = arr[i];
        }
        else if(tmax<arr[i] && arr[i]!=smax && arr[i]!=max){
            tmax = arr[i];
        }
    }
    cout<<"Maximum is "<<max<<endl;
    if(smax==INT_MIN) cout<<"No 2nd max exists"<<endl;
    else cout<<"2nd max is "<<smax<<endl;
    if(tmax==INT_MIN) cout<<"No 3rd max exists"<<endl;
    else cout<<"3rd max is "<<tmax<<endl;

}