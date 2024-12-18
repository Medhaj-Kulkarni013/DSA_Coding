#include<iostream>
using namespace std;
void printOddbetnAB(int x , int y){
    for(int i=x; i<=y; i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a;
    cout<<"Enter first num : ";
    cin>>a;
    int b;
    cout<<"Enter second num : ";
    cin>>b;
    printOddbetnAB(min(a,b),max(a,b));

}