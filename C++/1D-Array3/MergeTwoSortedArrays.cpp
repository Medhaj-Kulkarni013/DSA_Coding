#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>&arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> arr3(m+n);
    while (i<n && j<m){
        if(arr2[j]>arr1[i]){
            arr3[k] = arr1[i];
            i++;
            //k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            //k++;
        }
        k++;
    }
    if(i==n){ //arr1 che sagle elements arr3 madhe gelet
        while(j<m){// urlele arr2 che elements janar
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){ //arr2 che sagle elements arr3 madhe gelet
        while(i<n){ // urlele arr1 che elements janar
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    return arr3;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
     for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
     for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v = merge(arr1,arr2);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}