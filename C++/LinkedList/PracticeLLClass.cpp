#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    int getIdx(int idx){
        if(size==0){
            cout<<"List is empty!!";
            return -1;
        }
        else if(idx>=size || idx<0){
            cout<<"Invalid Index!!";
            return -1;
        }
        else{
            Node* temp = head;
            for(int i=0; i<idx; i++) temp = temp->next;
            return temp->val;
        }
        return 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBeginning(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx>size || idx<0){
            cout<<"Invalid Index!!"<<endl;
            return;
        }
        else if(idx==0) insertAtBeginning(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0; i<idx-1; i++) temp = temp->next;
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtBeginning(){
        if(size==0){
            cout<<"List is Empty!!";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtEnd(){
        if(size==0){
            cout<<"List is Empty!!";
            return;
        }
        else{
            Node* temp = head;
            while(temp->next->next!=NULL) temp = temp->next;
            // while(temp->next!=tail) temp = temp->next;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(idx>=size || idx<0){
            cout<<"Invalid Index!!";
            return;
        }
        else if(idx==0) deleteAtBeginning();
        else if(idx==size-1) deleteAtEnd();
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++) temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        if(size==0){
            cout<<"List is Empty!!";
            return;
        }
        else{
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    ll.insertAtBeginning(10);
    ll.display();
    ll.insertAtIdx(2,25);
    ll.display();
    cout<<ll.getIdx(3)<<endl;
    ll.deleteAtIdx(2);
    ll.display();
    ll.insertAtIdx(2,25);
    ll.display();
}