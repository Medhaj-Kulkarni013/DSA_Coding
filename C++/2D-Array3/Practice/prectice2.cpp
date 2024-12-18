#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the num of cols : ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(i%2==0){
            for(int j=m-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else {
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}