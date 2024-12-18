#include<iostream>
using namespace std;
void sumOdd(int sum,int a,int b){
    if(a>b) {
        cout<<sum;
        return;
    }
    if(a%2!=0) sum+=a;
    sumOdd(sum,a+1,b);
}
int main(){
    int a;
    cout<<"Enter the start num : ";
    cin>>a;
    int b;
    cout<<"Enter the end num : ";
    cin>>b;
    sumOdd(0,a,b);
}