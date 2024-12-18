#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of rows for 1st Matrix : ";
    cin>>n;
    int m;
    cout<<"Enter the num of coloumns for 1st Matrix : ";
    cin>>m;
    int p;
    cout<<"Enter the num of rows for 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the num of coloumns for 2nd Matrix : ";
    cin>>q;
    if(m!=p){
        cout<<"Multiplication cannot happen as m is not equal to p";
        return 0;
    }
    else{
    int arr[n][m];
    int brr[p][q];
    cout<<"Enter the elements in 1st Matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements in 2nd Matrix : "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>brr[i][j];
        }
    }
    // resultant matrix
     // res[i][j] = arr[i][0]*arr[0][j] + arr[i][1]*brr[1][j] + ......
    int res[n][q];
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            res[i][j] = 0;
           for(int r=0; r<m; r++){
                    res[i][j] += arr[i][r]*brr[r][j];
                }    
           }
        }
    }
    // Printing resultant matrix
    cout<<"The resultant multiplied matrix is : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}