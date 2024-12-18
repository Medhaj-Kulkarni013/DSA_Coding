#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ // n+1-i is also okay
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){ // Or use just j<=i loop and then open the 
            cout<<"* ";              // below loop.   
        }
        // for(int j=1; j<=i-1; j++){
        //     cout<<"* ";
        // }
        cout<<endl;
    }
    int m=n-1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){ 
            cout<<"  ";
        }
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=m-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}