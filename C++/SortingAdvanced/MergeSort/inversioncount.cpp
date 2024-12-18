#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& a, vector<int>& b){
    int c = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += (a.size()-i);
            j++;
        }
        else i++;
    }
    return c;
}
void merge(vector<int>& a, vector<int>& b, vector<int>& v){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]) v[k++] = b[j++];
        else v[k++] = a[i++];
    }
    while(i<a.size()) v[k++] = a[i++];
    while(j<b.size()) v[k++] = b[j++];   
}
int mergesort(vector<int>& v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0; i<n1; i++) a[i] = v[i];
    for(int i=0; i<n2; i++) b[i] = v[i+n1];
    count += mergesort(a);
    count += mergesort(b);
    count += inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return count;
}
int main(){
    vector<int> v = {5,1,8,2,3};
    cout<<"The number of inversion pairs are : "<<mergesort(v);;
}