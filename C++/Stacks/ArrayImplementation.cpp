#include<iostream>
using namespace std;
class Stack{
private : 
    int idx = -1;
    int arr[5];
public :
    void push(int val){
        if(idx==4){
            cout<<"Stack Overflow!!"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow!!"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty!!"<<endl;
            return 0;
        }
        int x = arr[idx];
        return x;
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0){
        int x = st.top();
        cout<<x<<" ";
        st.pop();
    }
}