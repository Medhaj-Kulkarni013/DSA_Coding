#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1 || n==0) return 1;
    // recursive call
    int ans = n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<fact(n)<<" ";
}