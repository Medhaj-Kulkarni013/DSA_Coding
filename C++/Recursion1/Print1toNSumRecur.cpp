#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0) return 0;
    int ans = n + Sum(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<Sum(n);
}