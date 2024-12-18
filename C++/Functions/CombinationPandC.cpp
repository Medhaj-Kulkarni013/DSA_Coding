#include<iostream>
using namespace std;

int fact(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int Combination(int n , int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int Permutation(int n , int r){
    int nPr = fact(n)/fact(n-r);
    return nPr;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int r;
    cout<<"Enter the value of r : ";
    cin>>r;
    cout<<"The nCr value of "<<n<<" & "<<r<<" is "<<Combination(n,r)<<endl;
    cout<<"The nPr value of "<<n<<" & "<<r<<" is "<<Permutation(n,r);
}