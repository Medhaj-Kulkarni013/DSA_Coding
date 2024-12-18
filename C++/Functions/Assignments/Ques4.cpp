#include<iostream>
using namespace std;
void CountAndSquare(int x){
    int count = 0;
    while(x>0){
        x /= 10;
        count++;
    }
    cout<<"The num of Digits are "<<count<<endl;
    cout<<"The Square of num of Digits is "<<count*count;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    CountAndSquare(n);
}