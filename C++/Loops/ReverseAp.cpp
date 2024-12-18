//100 99 98 97 96 95 ......3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the First Term : ";
    cin>>n;
    // for (int i=n; i>0; i-=3)
    // {
    //     cout<<i<<" ";
    // }

    // 2nd Method
    int a=n;
    for(int i=1; i<=34; i++)
    {
        cout<<a<<" ";
        a-=3;
    }
    
}