#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n , int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"The nCr is : "<<combination(n,r);
}