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

class Queue{
private :
    Node* head;
    Node* tail;
    int n;
public :
    Queue(){
        head = tail = NULL;
        n = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(n==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        n++;
    }
    void pop(){
        if(n==0){
            cout<<"Queue is Empty!!"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(!head) tail = NULL;
        delete(temp);
        n--;
    }
    int front(){
        if(n==0){
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        return head->val;
    }
    int back(){
        if(n==0){
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        return tail->val;
    }
    int size(){
        return n;
    }
    void display(){
        if(n==0){
            cout<<"Queue is Empty!!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
}