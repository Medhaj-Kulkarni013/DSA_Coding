// GP-> 3 12 48....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms : ";
    cin>>n;
    int a=3;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a*=4;
    }
}