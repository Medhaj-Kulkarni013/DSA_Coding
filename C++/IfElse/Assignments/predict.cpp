#include<iostream>
using namespace std;
int main(){
    int a = 5,b,c;
    b = a = 15; // Assignment Operators =,+=,-=,*=,/= together will have right->left precidence
    c = a < 15; // relation > assignment
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c;
    return 0;
}