#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    int mx = INT_MIN; // OR max = arr[0];
    int smax = INT_MIN;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(mx<arr[i]){
            smax = mx;
            mx = arr[i];
        }
        // else smax = max(smax,arr[i]); // This also works
        else if(smax<arr[i] && arr[i]!=mx) smax = arr[i];
    }
    cout<<"Maximum element in array is : "<<mx<<endl;
    if(smax==INT_MIN) cout<<"No Second Maximum Exists"<<endl;
    else cout<<"Second maximum element in array is : "<<smax<<endl;
}