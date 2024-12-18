// USING STARBRIDGE METHOD 1 OR 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int m = n-1;
    int nsp = 2*m-1;
    int nst = 1;
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
        nst++;
        nsp-=2;
        cout<<endl;
    }
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    int nst2 = m;
    int nsp2 = 1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=nst2; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp2; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst2; j++){
            cout<<"* ";
        }
        nst2--;
        nsp2+=2;
        cout<<endl;
    }
}