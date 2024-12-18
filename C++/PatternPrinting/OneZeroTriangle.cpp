#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Rows & Coloumn : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
    // // 2nd Method
    // for(int i=1; i<=n; i++)
    // {   int a;
    //     if(i%2!=0) a=1; // odd row num
    //     else a=0;       // even row num
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<a;
            // flipping
    //         if(a==0) a=1;
    //         else a=0;
    //     }
    //     cout<<endl;
    //    }
}