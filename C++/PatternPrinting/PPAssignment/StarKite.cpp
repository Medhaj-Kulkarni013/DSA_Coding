#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of lines : ";
    cin>>n;
    int m = n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j==n+1) cout<<"* ";
            else if(i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1; j<=m; j++){
            if(j==i-1) cout<<"* ";
            else if(i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1; i<=m; i++){
        cout<<"  ";
        for(int j=1; j<=m; j++){
            if(i==j) cout<<"* ";
            else if(j==m) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1; j<=m; j++){
            if(i+j==m) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}