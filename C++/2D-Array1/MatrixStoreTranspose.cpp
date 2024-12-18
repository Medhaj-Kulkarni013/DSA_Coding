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
    int brr[m][n];
    cout<<"Transpose is : "<<endl;
    // Storing Transpose
    for(int i=0; i<m; i++){ 
        for(int j=0; j<n; j++){ 
           brr[i][j] = arr[j][i];
        }
    }
    // Printing Transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    // O(1) space and only for n*n matrix
    // for(int i=0; i<m; i++){ 
    //     for(int j=i+1; j<n; j++){ 
    //         int temp = arr[i][j];
    //        arr[i][j] = arr[j][i];
    //        arr[j][i] = temp;
    //     }
    // }
}