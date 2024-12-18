#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,8,1,4,2,7};
    int n = 6;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    for(int i=0; i<k; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j]) min = j;
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0; i<k; i++) cout<<arr[i]<<" ";
}