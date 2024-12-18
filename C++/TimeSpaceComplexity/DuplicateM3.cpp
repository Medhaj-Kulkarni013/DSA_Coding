#include<iostream>
using namespace std;
int main(){
    int arr[8] = {6,3,2,4,1,7,1,5};
    int sum = 0;
    int n = 7;
    int s = n*(n+1)/2; 
    for(int i=0; i<8; i++){
        sum += arr[i];
    }
    cout<<"Duplicate is "<<sum-s;
}