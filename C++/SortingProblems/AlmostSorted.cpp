#include<iostream>
#include<algorithm>
using namespace std;
// We can also solve this using extra O(n) space and TC O(n2)
// But this is a better soln as SC = O(1) and TC = O(n2)
int main(){
    int arr[] = {4,2,7,9,8};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            else{
                if(arr[i]<arr[j]) count++;
            }
        }
    int idx = n-1-count;
    if(abs(idx-i)==1 || (idx-i)==0) continue;
    else {
        flag = false;
        break;
    }
    }
    cout<<flag;
}