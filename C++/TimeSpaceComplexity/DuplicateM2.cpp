#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[8] = {6,3,2,4,1,7,1,5};
    vector<int> check(8);
    for(int i=0; i<8; i++){
        if(check[arr[i]]==1){
            cout<<arr[i]<<" is the duplicate";
            break;
        }
        else check[arr[i]] = 1;
    }
}