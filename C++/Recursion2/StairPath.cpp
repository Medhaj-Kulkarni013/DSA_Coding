#include<iostream>
using namespace std;
// Only 1 step or 2 steps are allowed to climb at once 
int StairPath(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    int ans = StairPath(n-1) + StairPath(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the num of total steps : ";
    cin>>n;
    cout<<StairPath(n);
}