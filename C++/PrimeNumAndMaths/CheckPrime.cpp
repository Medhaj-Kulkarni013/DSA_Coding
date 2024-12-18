#include<iostream>
#include<cmath>
using namespace std;
// TC = O(n)
bool isPrime1(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}
// TC = O(sqrt(n))
bool isPrime2(int n){
    if(n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    cout<<isPrime1(48)<<endl;
    cout<<isPrime2(48);
}