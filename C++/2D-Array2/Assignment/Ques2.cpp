// Rotate a square by 90 degree anti clockwise
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows & coloumns : ";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // Converting arr to its transpose in same arr
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i==j) continue;
            else{
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            }
        }
    }
    for(int k=0; k<n; k++){
        int i = 0;
        int j = n-1;
        while(i<=j){
            // can use in built swap as well
            int temp = arr[i][k];
            arr[i][k] = arr[j][k];
            arr[j][k] = temp;
            i++;
            j--;
        }
    }
    cout<<endl;
    // Printing rotated anticlockwise matrix;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}