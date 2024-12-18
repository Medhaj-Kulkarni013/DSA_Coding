// USING STARBRIDGE METHOD 1 OR 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int m = n-1;
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1; i<=m-1; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int nsp = 2*m-1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        nsp-=2;
        cout<<endl;
    }
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
}
