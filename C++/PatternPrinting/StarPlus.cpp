#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "; //Number must be ODD orlese + wont be printed
    cin>>n;
    int a = n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==a || j==a){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}