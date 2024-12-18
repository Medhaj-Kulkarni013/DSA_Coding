#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // My Method
    // for(int i=2; i<=n-1; i++)
    // {
    //     if(n%i==0){
    //         cout<<n<<" is a composite number";
    //         break;
    //     }
    //     else{
    //         cout<<n<<" is a prime number";
    //         break;
    //     }
    // }
    // if(n==1)
    //     cout<<n<<" is neither prime nor composite";
    // else if(n==2)
    //     cout<<n<<" is a prime number";

    // Method 2
    bool flag = true;
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<n<<" is neither prime nor composite number";
    else if(flag==true) cout<<n<<" is a prime number";
    else cout<<n<<" is a composite number";
}