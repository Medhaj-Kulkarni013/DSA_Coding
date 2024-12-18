#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int Combination(int n , int r){
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main(){
    int n;
    cout<<"Enter the num of lines : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<Combination(i,j)<<" "; // iCj
        }
        cout<<endl;
    }
}