#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int m = n-1;
    int nsp = 1;
    int nst = m;
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
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
    int m2 = m-1;
    int nst2 = 2;
    int nsp2 = 2*m2-1;
    for(int i=1; i<=m2; i++){
        for(int j=1; j<=nst2; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp2; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst2; j++){
            cout<<"* ";
        }
        nst2++;
        nsp2-=2;
        cout<<endl;
    }
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
}