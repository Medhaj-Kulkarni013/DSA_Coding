#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum += lastdigit;
        n /= 10;
    }
    cout<<"The sum of digits of the number is "<<sum;
}