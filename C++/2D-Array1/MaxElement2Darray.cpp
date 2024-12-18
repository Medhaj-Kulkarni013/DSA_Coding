#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the num of coloumns : ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Print
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Maximum Element is : "<<max;
}