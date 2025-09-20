#include<iostream>
using namespace std;
class Node{
public :
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Stack{
private: 
    Node* head;
    int n; // size
public:
    Stack(){
        head = NULL;
        n = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        n++;
    }
    void pop(){
        if(!head){
            cout<<"Stack Underflow!!"<<endl;
            return;
        }
        head = head->next;
        n--;
    }
    int top(){
        if(!head){
            cout<<"Stack is Empty!!"<<endl;
            return 0;
        }
        return head->val;
    }
    int size(){
        if(!head){
            cout<<"Stack is Empty!!"<<endl;
            return 0;
        }
        return n;
    }
    void print(Node* head){
        if(!head) return;
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        print(head);
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.display();
    st.pop();
    cout<<st.size()<<endl;
    st.display();
}