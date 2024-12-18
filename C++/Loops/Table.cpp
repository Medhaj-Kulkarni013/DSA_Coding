#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"The Table of "<<n<<" is :"<<endl;
    for(int i=1; i<=10; i++){
        int table = n*i;
        cout<<table<<endl;
    }
}