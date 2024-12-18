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
    int getAt(int idx){
        if(idx>=size){
            cout<<"Invalid Index!!";
            return -1;
        }
        Node* temp = head;
        for(int i=0; i<idx; i++) temp = temp->next;
        return temp->val;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBeginning(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index!!";
        else if(idx==0) insertAtBeginning(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* temp = head;
            Node* t = new Node(val);
            for(int i=0; i<idx-1; i++) temp = temp->next;
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!!";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!!";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail) temp = temp->next;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAt(int idx){
        if(size==0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++) temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10); //{10->NULL}
    ll.insertAtEnd(20); //{10->20->NULL}
    ll.insertAtEnd(30); //{10->20->30->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(40); //{10->20->30->40->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtBeginning(5);//{5->10->20->30->40->NULL}
    ll.display();
    ll.insertAt(2,15); //{5->10->15->20->30->40->NULL}
    ll.display();
    cout<<ll.getAt(3)<<endl;
    ll.insertAt(4,25);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAt(2);
    ll.display();
}