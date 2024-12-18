#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl; // When size=capacity then capacity is doubled
    v.push_back(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    

}