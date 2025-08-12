#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        size = 0;
        this->head = NULL;
        this->tail = NULL;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // new step for DLL
            tail = temp;
        }
        size++;
    }

    void insertAtBegining(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; // new step for DLL
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index!!"<<endl;
            return;
        }
        else if(idx==0) insertAtBegining(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp;
            if(idx-1 < size-idx){ // if the index is closer from front. (idx-1 index from front will be size-idx from back)
            // remember for insertion we need to reach the node which right before the index where new node is to be inserted 
                temp = head;
                for(int i=0; i<idx-1; i++) temp = temp->next;
            }
            else{
                temp = tail;
                for(int i=0; i<size-idx; i++) temp = temp->prev;
            }
            t->next = temp->next;
            temp->next = t;
            t->next->prev = t; // new step for DLL
            t->prev = temp; // new step for DLL
            size++;
        }
    }

    void deleteAtBegining(){
        if(size==0){
            cout<<"LinkedList is Empty!!"<<endl;
            return;
        } 
        else{
            head = head->next;
            if(head) head->prev = NULL; // new step for DLL
            if(!head) tail = NULL;
            size--;
        }
    }
    
    void deleteAtEnd(){
        if(size==0){
            cout<<"LinkedList is Empty!!"<<endl;
            return;
        }
        else if(size==1) deleteAtBegining();
        else{ // O(1) for DLL
            tail = tail->prev;
            tail->next = NULL;
            size--;
        }
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index!!"<<endl;
            return;
        }
        else if(idx==0) deleteAtBegining();
        else if(idx==size-1) deleteAtEnd();
        else{
            Node* temp;
            if(idx-1 < size-idx){ // if the index is closer from front. (idx-1 index from front will be size-idx from back)
            // remember for insertion we need to reach the node which right before the index where new node is to be inserted 
                temp = head;
                for(int i=0; i<idx-1; i++) temp = temp->next;
            }
            else{
                temp = tail;
                for(int i=0; i<size-idx; i++) temp = temp->prev;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // new step for DLL;
            size--;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index!!"<<endl;
            return;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp;
            if(idx<size-idx-1){
                temp = head;
                for(int i=0; i<idx; i++) temp = temp->next;
                return temp->val;
            }
            else{
                temp = tail;
                for(int i=0; i<size-idx-1; i++) temp = temp->prev;
                return temp->val;
            }
        }
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DLL l1;
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.insertAtEnd(50);
    l1.display();
    l1.insertAtBegining(10);
    l1.display();
    l1.insertAtIdx(3,35);
    l1.display();
    l1.insertAtIdx(4,37);
    l1.display();
    l1.insertAtIdx(6,45);
    l1.display();
    l1.deleteAtBegining();
    l1.display();
    l1.deleteAtIdx(5);
    l1.display();
    l1.deleteAtEnd();
    l1.display();
    cout<<l1.getAtIdx(3)<<endl;
    l1.deleteAtBegining();
    l1.display();
}