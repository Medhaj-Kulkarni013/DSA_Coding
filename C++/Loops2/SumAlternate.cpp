// 1-2+3-4+5-6+7....n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    // Inefficient Method
    // for(int i=1; i<=n; i++){
    //     if(i%2==0) sum -= i;
    //     else sum += i;
    // }
    //Method 2 most efficient
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<"The sum is "<<sum;
}