#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ // n+1-i is also okay
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        for(int j=1; j<=i-1; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    // Method 2
    // int nsp = n-1;
    // int nst = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=nsp; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=nst; j++){
    //         cout<<(char)(j+64);
    //     }
    //     nsp--;
    //     nst+=2;
    //     cout<<endl;
    // }
}