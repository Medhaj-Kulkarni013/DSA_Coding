#include<iostream>
using namespace std;
int StairPath(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int ans = StairPath(n-1) + StairPath(n-2) + StairPath(n-3); 
}
int main(){
    cout<<StairPath(3);
}