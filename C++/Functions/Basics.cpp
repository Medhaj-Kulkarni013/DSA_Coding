// Create Pattern print fn
#include<iostream>
using namespace std;
void printTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    printTriangle(3);
    printTriangle(4);
    printTriangle(5);
}