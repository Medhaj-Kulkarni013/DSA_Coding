#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
        cout<<"The value of "<<i<<"! is : "<<fact<<endl;
    }
}