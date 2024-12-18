#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n /= 10;
        count++;
    }
    if(a==0) cout<<"The Number of digit is 1";
    else cout<<"The Number of Digits are "<<count;
}