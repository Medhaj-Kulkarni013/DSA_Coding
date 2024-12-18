#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    float kmin = INT_MIN;
    float kmax = INT_MAX;
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin,(float)(arr[i]+arr[i+1])/2);
        }
        else{
            kmax = min(kmax,(float)(arr[i]+arr[i+1])/2);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin == 0) cout<<"Only one value of k exists "<<kmin;
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin > 0) kmin = (int)kmin+1;
        cout<<"Range of k is from ["<<kmin<<","<<(int)kmax<<"]";
    }
}