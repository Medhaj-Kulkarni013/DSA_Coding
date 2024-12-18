// Limited Sum of rectangle
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
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int x1,y1;
    cout<<"Enter the 1st coordinates : ";
    cin>>x1>>y1;
    int x2,y2;
    cout<<"Enter the 2nd coordinates : ";
    cin>>x2>>y2;
    int sum = 0;
    for(int i=x1; i<=x2; i++){
        for(int j=y1; j<=y2; j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
}