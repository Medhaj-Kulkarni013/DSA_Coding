#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<char(i+64)<<" ";
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i=1; i<=m; i++){
        int a = 1;
        for(int j=1; j<=m-i+1; j++){
            cout<<char(j+64)<<" ";
            a++;
        }
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
            a++;
        }
        nsp+=2;
        for(int j=1; j<=m+1-i; j++){
            cout<<char(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}