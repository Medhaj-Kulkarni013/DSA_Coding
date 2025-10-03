#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    stack<int> st;
    int pge[n];
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<=arr[i]) st.pop();
        pge[i] = (st.empty()) ? -1 : st.top();
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++) cout<<pge[i]<<" ";
}