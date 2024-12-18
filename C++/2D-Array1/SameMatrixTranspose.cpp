// Square Matrix
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows/coloumns : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Print Normal Matrix
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Change the same matrix to transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if(i==j) continue;
           else {
            // Swapping i,j values with j,i values
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
           }
        }
    }
    cout<<endl;
    // Print Changed/Transpose Matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}