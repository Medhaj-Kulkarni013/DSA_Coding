#include<iostream>
using namespace std;
int main(){
    int n; // Pattern is specific for n=4;
    cout<<"Enter the num of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int m=n-1;
    for(int i=1; i<=m; i++){
        int a=1;
        for(int j=1; j<=m+1-i; j++){
            cout<<a<<" ";
            a++;
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"  ";
            a++;
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}