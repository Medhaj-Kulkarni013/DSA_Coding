#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    int m=n-1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=2*i-1; j++){ // we can also use one loop of j<=i & other of j<=i-1
            cout<<"  ";              // instead of this j<=2*i-1;
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}