#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;
    int ans = power(a,b/2);
    if(b%2!=0)return a*ans*ans;
    else return ans*ans;
}
int main(){
    int a;
    cout<<"Enter the base : ";
    cin>>a;
    int b;
    cout<<"Enter the exponant/power : ";
    cin>>b;
    cout<<power(a,b);
}