#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    int max = INT_MIN; // OR max = arr[0];
    int smax = INT_MIN;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    for(int i=0; i<n; i++){
        if(smax<arr[i] && arr[i]!=max) smax = arr[i];
    }
    cout<<"Maximum element in array is : "<<max<<endl;
    cout<<"Second maximum element in array is : "<<smax<<endl;
}