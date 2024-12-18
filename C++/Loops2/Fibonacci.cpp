#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term : ";
    cin>>n;
    int a=1,b=1;
    int sum=1;
    for(int i=1; i<=n-2; i++)
    {
        sum = a + b;
        b = a;
        a = sum;
    }
    cout<<"The "<<n<<" fibonacci term is : "<<sum;
}