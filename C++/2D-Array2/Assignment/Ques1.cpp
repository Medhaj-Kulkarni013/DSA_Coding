// Print diagonals of a square matrix
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows and coloumns : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // Printing diagonal elements 
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1) cout<<arr[i][j]<<" ";
            else continue;
        }
    }
}