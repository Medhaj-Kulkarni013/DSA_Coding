#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the num of coloumns : ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int j=0; j<m; j++){ // coloumn wise printing
        if(j%2==0){
            for(int i=0; i<n; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else {
            for(int i=n-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}