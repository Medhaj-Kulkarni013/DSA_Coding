#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] >= b[j]) res[k++] = b[j++];
        else res[k++] = a[i++]; 
    }
    while(i<a.size()){
        res[k++] = a[i++];
    }
    while(j<b.size()){
        res[k++] = b[j++];
    }
}
void mergesort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    // copy pasting
    for(int i=0; i<n1; i++) a[i] = v[i];
    for(int i=0; i<n2; i++) b[i] = v[i+n1];
    // breaking the 2 divided arrays further
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
    // to optimize space complexity
    a.clear();
    b.clear();
}
int main(){
    vector<int> v = {3,1,4,2,7,5,9,11,13};
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    mergesort(v);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}