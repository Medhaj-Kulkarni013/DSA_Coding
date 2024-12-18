#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1; j<=i-1; j++){
            if(i==j+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    int m = n-1;
    for(int i=1; i<=m; i++){
        cout<<"  ";
        for(int j=1; j<=m; j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1; j<=m-i; j++){
            if(i+j==m) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}