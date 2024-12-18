#include<iostream>
using namespace std;
void reverse(int *ptr){
    //int x = *ptr;
    int rev = 0;
    while((*ptr)>0){
        int lastdigit = (*ptr)%10;
        rev = rev*10 + lastdigit;
        (*ptr) /= 10;
    }
    cout<<rev;
}
int main(){
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    int *ptr = &n;
    reverse(ptr);
}