#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    int nst=m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        cout<<endl;
        nsp+=2;
        nst--;
    }
}