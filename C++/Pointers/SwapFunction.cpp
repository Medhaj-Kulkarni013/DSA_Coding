#include<iostream>
using namespace std;
void swap(int *a , int *b){ // we need pointer formal parameters to recieve 
    int temp = *a;         // and store address of actual parameters/arguments
    *a = *b;
    *b = temp;
}
int main(){
    int a;
    cout<<"Enter the a num : ";
    cin>>a;
    int b;
    cout<<"Enter the b num : ";
    cin>>b;     // Basically this is pass by value which wont work we need pass by reference
    swap(&a,&b); // These number wont be swapped UNLESS WE PASS ADDRESSES of these 
    cout<<"Swapped value a = "<<a<<endl;// variables since these arguments/actual parameters
    cout<<"Swapped value b = "<<b;//& formal parameters are set of different variables , so 
}// only formal parameter(variables in func defn) are being swapped and not our actual
// parameters i.e arguments.