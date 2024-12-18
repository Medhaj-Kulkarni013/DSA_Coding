#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v, int idx){
    if(idx==v.size()) return;
    // reverse print
    print(v,idx+1);
    cout<<v[idx]<<" ";
    // normal print
    //print(v,idx+1);
}
int main(){
    vector<int> v = {1,2,3,4,5};
    print(v,0);
}
