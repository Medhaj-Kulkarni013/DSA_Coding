#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of Rows : ";
    cin>>n;
    int m=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1; j<=m; j++){
            if(i+j==m+1) cout<<"* ";
            else cout<<"  ";
        }
        // 2nd method using n-i triangle loop
        // for(int j=1; j<=n-i; j++){
        //     if(i+j==n) cout<<"* ";
        //     else cout<<"  ";
        // }
        cout<<endl;
    }
}