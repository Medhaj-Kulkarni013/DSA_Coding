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
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Printing Spiral Form
    int minR = 0;
    int minC = 0;
    int maxR = n-1;
    int maxC = m-1;
    while(minR<=maxR && minC<=maxC){
        if(minR>maxR || minC>maxC)
        // Right
        for(int j=minC; j<=maxC; j++){
            cout<<arr[minR][j]<<" ";
        }
        minR++;
        if(minR>maxR || minC>maxC)
        // Down
        for(int i=minR; i<=maxR; i++){
            cout<<arr[i][maxC]<<" ";
        }
        maxC--;
        if(minR>maxR || minC>maxC)
        // Left 
        for(int j=maxC; j>=minC; j--){
            cout<<arr[maxR][j]<<" ";
        }
        maxR--;
        if(minR>maxR || minC>maxC)
        // Up
        for(int i=maxR; i>=minR; i--){
            cout<<arr[i][minC]<<" ";
        }
        minC++;
    }
}