// Used when we need to perform operations like add/sub/multi/div within a range multiple
// times and direct updation of value is not needed (eg arr[i] = x ...is updation)
// if direct updation is required then use segment trees.

// Brut Force Approach will usually give TLE as TC = O(Q*n); Q is number of queries

//Q. Given an array of size N which is initialized with all zeros. We are given many 
//   ranges add queries, which should be applied to this array. We need to print the 
//   final updated array as our result. 

// Examples: 
// N = 6
// Arr = [0, 0, 0, 0, 0, 0]
// rangeUpdate1 [0, 2], add 100
// Arr = [100, 100, 100, 0, 0, 0]
// rangeUpdate1 [1, 5], add 100
// Arr = [100, 200, 200, 100, 100, 100]
// rangeUpdate1 [2, 3], add 100
// Arr = [100, 200, 300, 200, 100, 100]
// Which is the final updated array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> query = {{0,2,100},{1,5,100},{2,3,100}};
    int n = 6;
    vector<int> diff(n);

    // step 1 : Building the diff array
    for(int i=0; i<query.size(); i++){
        int start = query[i][0];
        int end = query[i][1];
        int x = query[i][2];

        diff[start] += x;
        if(end+1<n) diff[end+1] -= x; 
    }

    // Step 2 : Find the Cumilative sum to calculate the resultant change in the index i
    for(int i=1; i<n; i++) diff[i] += diff[i-1];

    for(int i=0; i<n; i++) cout<<diff[i]<<" "; 

    // TC of this approach is O(Q + n);    
    // TC of Segment Tree approach is O((n + Q)*logn);    
}