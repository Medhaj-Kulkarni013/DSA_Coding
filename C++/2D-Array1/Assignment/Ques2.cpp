// Addition of matrix in same matrix
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
    int brr[n][m];
    cout<<"Enter the elements for 1st matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the elements for 2nd matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    // Adding the matrices
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            brr[i][j] = brr[i][j] + arr[i][j];
        }
    }
    // Printing sum
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}