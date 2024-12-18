#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Lines : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    int ml = n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
}