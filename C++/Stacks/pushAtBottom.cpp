#include<bits/stdc++.h>
using namespace std;
void pushAtIndex(stack<int>& st, int idx, int val){
    stack<int> temp;
    while(st.size()>idx){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(!temp.empty()){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(!temp.empty()){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
void print(stack<int>& st){
    stack<int> temp;
    while(!st.empty()){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    while(!temp.empty()){
        int x = temp.top();
        cout<<x<<" ";
        st.push(x);
        temp.pop();
    }
    cout<<endl;
}
void printRev(stack<int>& st){
    stack<int> temp;
    while(!st.empty()){
        int x = st.top();
        cout<<x<<" ";
        temp.push(x);
        st.pop();
    }
    while(!temp.empty()){
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    printRev(st);
    print(st); // prints in order of which elements are pushed
    pushAtBottom(st,70);
    print(st);
    pushAtIndex(st,2,90);
    print(st);
}