#include<iostream>
using namespace std;
int main(){
    int arr[8] = {6,3,2,4,1,7,1,5};
    bool flag = false;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" is duplicate";
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
}