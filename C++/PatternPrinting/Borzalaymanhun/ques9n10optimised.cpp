#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    int a,b;
    // for(int i=1; i<=2*n-1; i++){
    //     for(int j=1; j<=2*n-1; j++){
    //        a = i;
    //        b = j;
    //        if(a>n) a = 2*n-i;
    //        if(b>n) b = 2*n-j;
    //        if(a+b==n+1) cout<<"* ";
    //        else cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            a = i;
            b = j;
            if(a>n) a = 2*n-i;
            if(b>n) b = 2*n-j;
            if(a+b==n+1) cout<<"* ";
            else if(i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}