// AP-> 1 3 5 7 9.....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of Terms : ";
    cin>>n;
    for(int i=1; i<=(2*n-1); i+=2){
        cout<<i<<" ";
    }

    // 2nd method
    // int a=1;
    // for(int i=1; i<=n; i++){
    //     cout<<a<<" ";
    //     a+=2;
    // }
}