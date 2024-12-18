#include<iostream>
using namespace std;
void printPalindrome(int i,int n){
    if(i>=n){
        cout<<i<<" ";
        return;
    }
    cout<<i<<" ";
    printPalindrome(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    printPalindrome(1,n);
}
