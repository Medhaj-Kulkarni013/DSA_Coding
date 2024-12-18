#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum  = 0;
    while(n>0){
        int lastdigit = n%10;
        if(lastdigit%2==0)
            sum += lastdigit;
        n = n/10;
    }
    cout<<"Sum of Even Digits is : "<<sum;
}