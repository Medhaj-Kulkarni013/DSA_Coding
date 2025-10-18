#include<iostream>
using namespace std;

class Node{
public :
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        next = prev = NULL;
    }
};

class Deque{
private :
    Node* head;
    Node* tail;
    int n;
public :
    Deque(){
        n = 0;
        head = tail = NULL;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(n==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        n++;
    }
    void pop_back(){
        if(n==0){
            cout<<"Deque is Empty!!"<<endl;
            return;
        }
        else{
            Node* temp = tail;
            tail = tail->prev;
            if(tail) tail->next = NULL;
            else head = NULL;
            delete(temp);
            n--;
        }
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(n==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        n++;
    }
    void pop_front(){
        if(n==0){
            cout<<"Deque is Empty!!"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            if(head) head->prev = NULL;
            else tail = NULL;
            delete(temp);
            n--;
        }
    }
    int front(){
        if(n==0){
            cout<<"Deque is Empty!!"<<endl;
            return 0;
        }
        return head->val;
    }
    int back(){
        if(n==0){
            cout<<"Deque is Empty!!"<<endl;
            return 0;
        }
        return tail->val;
    }
    int size(){
        return n;
    }
    void display(){
        if(n==0){
            cout<<"Deque is Empty!!"<<endl;
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
    Deque dq;
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.display();
    dq.push_front(10);
    dq.push_front(5);
    dq.display();
    dq.pop_front();
    dq.display();
    dq.pop_back();
    dq.display();
    dq.pop_front();
    dq.display();
}