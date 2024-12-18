#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,7};
    int *ptr = arr;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++; // at last iteration ptr is nolonger pointing arr
    }
    ptr = arr; // again ptr pointing arr
    cout<<endl;
    *ptr = 8; // arr[0] is updated to 8
    ptr++; // ptr is now pointing 2nd element
    *ptr = 9;// arr[1] is updated to 9
    ptr--;// ptr is now again pointing 1st element;
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }

}