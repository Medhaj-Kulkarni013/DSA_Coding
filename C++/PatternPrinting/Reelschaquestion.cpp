#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int a;
    // for(int i=1; i<=n; i++){
    //     a = i;
    //     int b = n-1;
    //     for(int j=1; j<=i; j++){
    //         cout<<a<<" ";
    //         a+=b;
    //         b--;
    //     }
    //     cout<<endl;
    // }
    int b = n+2;
    for(int i=1; i<=n; i++){
        a = i;
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a+=b;
        }
    }
}