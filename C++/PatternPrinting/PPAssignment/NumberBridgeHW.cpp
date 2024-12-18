#include<iostream>
using namespace std;
int main(){
    int n;              // Pattern valid for n=4;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int b = 1;
    for(int i=1; i<=2*n-1; i++){ // to print 1 2 3 4 3 2 1  
        if(i<n){
            cout<<b<<" ";
            b++;
        }
        else{
            cout<<b<<" ";
            b--;
        }
    }
    cout<<endl;
    int m=n-1;
    for(int i=1; i<=m; i++){  
        int a = 3;
        for(int j=1; j<=m+1-i; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i-1; j++){
            cout<<"  ";
            a--;
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}