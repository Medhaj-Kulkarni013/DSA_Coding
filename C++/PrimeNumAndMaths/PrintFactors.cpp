#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 60;
    // for(int i=1; i<=sqrt(n); i++){
    //     if(n%i==0){
    //         cout<<i<<" "<<(n/i)<<" ";
    //     }
    // }

    // If you want sequenctially then use 2 for loops
    for(int i=1; i<sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=sqrt(n); i>1; i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}