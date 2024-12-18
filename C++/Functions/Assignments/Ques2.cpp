#include<iostream>
using namespace std;
float Area(float r){
    return 3.14*r*r;
}
int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"Area of circle is : "<<Area(r);

}