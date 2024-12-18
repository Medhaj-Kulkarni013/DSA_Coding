#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    // Bubble sort
    // for(int i=n-1; i>=0; i--){
    //     bool flag = true;
    //     for(int j=0; j<i; j++){
    //         if(v[j]>v[j+1]){
    //             swap(v[j],v[j+1]);
    //             flag = false;
    //         }
    //     }
    //     if(flag==true) break;
    // }

    // Selection Sort
    // for(int i=0; i<n-1; i++){
    //     int min = i;
    //     for(int j=i; j<n; j++){
    //         if(v[min]>v[j]) min = j; 
    //     }
    //     swap(v[i],v[min]);
    // }

    // Insertion Sort
    for(int i=0; i<n; i++){
        int j = i+1;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j],v[j-1]);
            j--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}