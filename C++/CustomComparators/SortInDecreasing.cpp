#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// This is the comparator which normal sort uses 
bool oldCmp(int a, int b){
    return a < b; 
    // 10 < 14 -> true -> picked 10 (first argument)
    // 14 < 10 -> false -> picked 14 (second argument)
}
bool newCmp(int a, int b){
    return a > b;
    // 14 > 10 -> true -> picked 14 (first argument)
    // 10 > 14 -> false -> picked 10 (second argument)
}
int main(){
    vector<int> v = {2,3,5,7,9,1,11,13,4,8,6,10};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // You can pass a third parameter in sort fn
    sort(v.begin(),v.end(),oldCmp); // sorts in increasing order
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),newCmp); // sorts in decreasing order
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // You can use lambda as well
}