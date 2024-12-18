#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=2*n-1; i++){
        if(i<n){
            cout<<a<<" ";
            a++;
        }
        else {
            cout<<a<<" ";
            a--;
        }
    }
    cout<<endl;
    int m = n-1;
    for(int i=1; i<=m; i++){
        int b = 0;
        for(int j=1; j<=m+1-i; j++){
            cout<<j<<" ";
            b++;
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<b<<" ";
            b--;
        }
        cout<<endl;
    }
}