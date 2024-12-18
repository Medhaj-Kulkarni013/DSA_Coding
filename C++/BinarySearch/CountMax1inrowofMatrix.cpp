#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][6] = {{1,1,1,1,1,1},{0,0,1,1,1,1},{0,0,0,0,0,1},{0,0,0,1,1,1}};
    int n = 4;
    int m = 6;
    int maxcount = 0;
    int row = -1;
    for(int i=0; i<n; i++){
        int lo = 0;
        int hi = m-1;
        int idx = -1;
        int count = 0;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==1) {
                if(mid==0){
                    idx = mid;
                    break;
                }
                if(arr[i][mid-1]!=1){
                    idx = mid;
                    break;
                }
                else hi = mid - 1;
            }
            else if(arr[i][mid]<1) lo = mid + 1;
            else hi = mid - 1;
        }
        count = m-idx;
        if(maxcount<count){
            maxcount = count;
            row = i;
        }
    }
    cout<<row<<" "<<maxcount;
}