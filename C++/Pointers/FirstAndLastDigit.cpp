#include<iostream>
using namespace std;
void Digit(int n,int *p1,int*p2){
    *p2 = n%10; // lastdigit
     while(n>9){
        n/=10;
     }
     *p1 = n; // firstdigit
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int firstdigit,lastdigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastdigit;
    Digit(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;

}