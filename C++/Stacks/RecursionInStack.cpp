#include<bits/stdc++.h>
using namespace std;
void displayRev(stack<int>& st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    cout<<x<<" ";
    displayRev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottom(stack<int>& st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverseStack(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // displayRev(st);
    // cout<<endl;
    // display(st);
    // cout<<endl;
    // pushAtBottom(st,5);
    display(st);
    reverseStack(st);
    cout<<endl;
    display(st);
}