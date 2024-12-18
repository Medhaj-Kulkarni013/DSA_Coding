// If an element is swapped more than once then it is not almost sorted
// TC = O(n) and SC = O(1)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {4,2,7,9,8};
    int n = 5;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    cout<<flag;
}