#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int a = i;
            int b = j;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
}