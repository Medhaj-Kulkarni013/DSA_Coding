#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {13,46,24,50,20,9};
    int n = 6;
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    // for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
}