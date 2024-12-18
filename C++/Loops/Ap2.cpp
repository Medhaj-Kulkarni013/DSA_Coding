// A
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms : ";
    cin>>n;
    // for(int i=4; i<=3*n+1; i+=3){
    //     cout<<i<<" ";
    // }

    
    // 2nd method
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=3;
    }
}