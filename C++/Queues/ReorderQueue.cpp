#include<bits/stdc++.h>
using namespace std;

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

void reorderQueue(queue<int>& q){
    stack<int> st;
    int n = q.size();
    // Step 1 : Push 1st half in stack and then again push from stack to queue.
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    // Step 2 : Push the 1st of current queue in stack.
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop();
    }
    // Step 3 : Push st.top() in queue then q.front() (alternatively) till stack is empty.
    while(!st.empty()){
        q.push(st.top());
        q.push(q.front());
        st.pop();
        q.pop();
    }
    // Step 4 : Reverse queue using stack;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorderQueue(q);
    display(q);
}