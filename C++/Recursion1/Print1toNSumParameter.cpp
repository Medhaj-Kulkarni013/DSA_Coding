#include<iostream>
using namespace std;
// int Sum(int sum , int n){
//     if(n==0) return sum;
//     // sum+=n;
//     // Sum(sum,n-1);
//     Sum(sum+n,n-1);
// }
void Sum(int sum , int n){
    if(n==0){
        cout<<sum;
        return;
    }
    Sum(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    Sum(0,n); 
} 