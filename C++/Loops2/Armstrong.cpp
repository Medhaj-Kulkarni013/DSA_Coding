#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int arms = 0;
    int a = n;
    while(n>0){
        int lastdigit = n%10;
        arms += lastdigit*lastdigit*lastdigit;
        n /= 10;
    }
    if(a==arms) cout<<arms<<" is an Armstrong Number";
    else cout<<a<<" is not an Armstrong Number";
}