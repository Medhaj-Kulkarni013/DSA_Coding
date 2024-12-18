#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows : ";
    cin>>n; 
    int m;
    cout<<"Enter the num of cols : ";
    cin>>m;
    vector<vector<char>> matrix(n,vector<char>(m));
    vector<vector<char>> v(m,vector<char>(n));
    cout<<"enter the characters : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    //Transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            v[j][i] = matrix[i][j];
        }
    }
    // Print char matrix;
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    //Rotate 90 degree
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            v[i][n-j-1] = matrix[j][i];
        }
    }
    cout<<endl;
    // Print rotated char matrix;
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}