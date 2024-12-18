#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    cout<<"The elements are : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sort01(v);
    display(v);
}