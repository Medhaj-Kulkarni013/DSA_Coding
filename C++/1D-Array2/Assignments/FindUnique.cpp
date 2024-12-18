// Only ONE Unique Element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j] && j!=i){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<"Unique Element Exists";
            return 0;// Remove Break/return 0 to print more than one unique
        }
        //else cout<<"No Unique Element Exists";
    }
        cout<<"No Unique Element Exists";
}