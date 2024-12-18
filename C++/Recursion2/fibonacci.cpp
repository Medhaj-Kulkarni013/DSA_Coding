#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans = fibo(n-1) + fibo(n-2); // reccurance relation
    return ans;
}
// 1 1 2 3 5 8 13 21 34 55 89.....
int main(){
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;
    cout<<fibo(n);
}