#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    int a;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=i-1; j>0; j--){
            cout<<j<<" ";
        }
        // for(int j=1; j<=i-1; j++){
        //     cout<<a<<" ";
        //     a--;
        // }
        // a = i;
        cout<<endl;
    }
}