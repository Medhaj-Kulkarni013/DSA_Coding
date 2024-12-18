#include<iostream>
using namespace std;
int main(){
    double x;
    cout<<"Enter the num : ";
    cin>>x;
    int y = (int)x;
    if(y<0) y--;
    cout<<x-y;
}