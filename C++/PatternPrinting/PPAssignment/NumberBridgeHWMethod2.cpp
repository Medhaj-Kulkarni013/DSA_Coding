#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int b=1;
    for(int i=1; i<=2*n-1; i++){
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
            cout<<2*n-a<<" ";
            a++;
        }
        cout<<endl;
    }
}