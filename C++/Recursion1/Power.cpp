#include<iostream>
using namespace std;
// int power(int a,int b){
//     if(a==0 && b==0) {
//         cout<<"Not defined";
//         return -100;
//     }
//     int p=1;
//     for(int i=1; i<=b; i++){
//         p*=a;
//     }
//     return p;
// }
int power(int a,int b){
    if(b==1) return a; // base case 
    // if(b==0) return 1; can also be a base case
    int ans = a * power(a,b-1);
    return ans;
}
int main(){
    int a;
    cout<<"Enter the num : ";
    cin>>a;
    int b;
    cout<<"Enter the power : ";
    cin>>b;
    cout<<power(a,b);
}
