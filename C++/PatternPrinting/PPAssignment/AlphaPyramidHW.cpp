#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=i; j>0; j--){
            cout<<(char)(j+64)<<" ";
        }
        int a=2;
        for(int j=1; j<=i-1; j++){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}