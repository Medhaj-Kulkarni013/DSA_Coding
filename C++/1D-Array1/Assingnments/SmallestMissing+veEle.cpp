// Array must be sorted
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-4,-2,0,1,3,4,6,7};
    bool flag = false;
    int x = 1;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]<=0) continue;
        if(arr[i]!=x){
            flag = true;
            break;
        }
        else x++;
    }
    if(flag==true) cout<<"Smallest missing element is : "<<x;
    else cout<<"No missing element";
}