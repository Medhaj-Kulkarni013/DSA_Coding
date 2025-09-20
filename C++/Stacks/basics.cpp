#include<iostream>
#include<stack>
using namespace std;
int main(){
    // LIFO (Last In First Out) or FILO
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(!st.empty()){ // will print in reverse order
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> st2; // to print in correct order
    while(!st.empty()){
        int x = st.top();
        st2.push(x);
        st.pop();
    }
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st.push(st2.top()); // to presereve the order of elements in the first stack (st)
        st2.pop();
    }
    cout<<endl;
    cout<<st.top()<<" ";
}