#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int a = n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n /= 10;
    }
    if(a==reverse) cout<<reverse<<" is a palindrome as reverse is also "<<reverse;
    else cout<<a<<" is not a palindrome as reverse is "<<reverse;
}