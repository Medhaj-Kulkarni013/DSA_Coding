#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of lines : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a = i;
            int b = j;
            if(a>n) a = 2*n-i; // 2*n-a/2*n-b will also work
            if(b>n) b = 2*n-j;
            if(a+b==n+1) cout<<"* ";
            else if(a==n || b==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}