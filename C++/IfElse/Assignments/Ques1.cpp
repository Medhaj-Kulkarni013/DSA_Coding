#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter The Radius : ";
    cin>>radius;
    if((2*3.14*radius)>(3.14*radius*radius))
        cout<<"The Circumference is Larger than Area";
    else if((2*3.14*radius)<(3.14*radius*radius))
        cout<<"The Area is Larger Than Circumference";
    else
        cout<<"Area=Circumference";
        return 0;
}