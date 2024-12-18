#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // basecase
    print(n-1); // call
    cout<<n<<" "; // kaam
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}