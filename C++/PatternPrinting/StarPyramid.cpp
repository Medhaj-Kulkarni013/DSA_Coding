#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Lines : ";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //      for(int j=1; j<=n-i; j++){ // n+1-i is also okay
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1; j<=i-1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Another Method
    for(int i=1; i<=n; i++){
         for(int j=1; j<=n-i; j++){ 
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}