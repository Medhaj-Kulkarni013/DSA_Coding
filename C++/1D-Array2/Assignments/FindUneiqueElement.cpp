#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elments : ";
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
            cout<<"Unique Element Exists which is "<<arr[i]<<endl;
            break;
        }
    }
}