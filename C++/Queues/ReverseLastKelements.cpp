#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>& q, int k){
    int n = q.size();
    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }
    stack<int> st;
    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    while(n>0){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        n--;
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q,4);
    display(q);
}