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
    // Taking Input
    for(int i=0; i<n; i++){ // rows
        for(int j=0; j<m; j++){ // coloumns
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Printing arr
    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose is : "<<endl;
    // Printing Transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Printing Transpose another method
    for(int j=0; j<m; j++){ // coloumn loop outside & row loop inside
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}