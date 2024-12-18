#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // basecase
    cout<<n<<" "; // kaam
    print(n-1); // call
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}