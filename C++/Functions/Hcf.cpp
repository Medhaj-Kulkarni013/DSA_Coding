#include<iostream>
using namespace std;
int gcd(int x , int y){
    int hcf = 1;
    for(int i=min(x,y); i>0; i--){
        if((x%i==0) && (y%i==0)){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"The highest common factor of a and b is : "<<gcd(a,b);
    
}