#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows/coloumns : "; // Enter only odd dimensions
    cin>>n;                                    // question requirement
    int arr[n][n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i==n/2 || j==n/2) cout<<arr[i][j]<<" ";
           else cout<<" "<<" ";
        }
        cout<<endl;
    }
}