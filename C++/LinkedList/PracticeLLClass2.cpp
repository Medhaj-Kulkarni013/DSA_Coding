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
        this->head = NULL;
        this->tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtBegining(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Enter a valid Index!!"<<endl;
            return;
        }
        else if(idx==0) insertAtBegining(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            Node* node = new Node(val);
            node->next = temp->next;
            temp->next = node;
            size++;
        }
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"LinkedList is Empty!!"<<endl;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next!=tail) temp = temp->next;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtBegining(){
        if(size==0){
            cout<<"LinkedList is Empty!!"<<endl;
            return;
        }
        else{
            head = head->next;
            size--;
        }
    }

    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"List is Empty!!"<<" ";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index!!"<<endl;
            return;
        }
        else if(idx==0) deleteAtBegining();
        else if(idx==size-1) deleteAtEnd();
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        if(size==0){
            cout<<"LinkedList is empty!!"<<endl;
            return;
        }
        else{
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

    int getSize(){
        return size;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtBegining(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(50);
    ll.display();
    cout<<ll.getSize()<<endl;
    ll.insertAtIndex(3,40);
    ll.display();
    cout<<ll.getSize()<<endl;
    ll.insertAtIndex(0,5);
    ll.display();
    cout<<ll.getSize()<<endl;
    ll.deleteAtEnd();
    ll.display();
    cout<<ll.getSize()<<endl;
    ll.deleteAtIndex(2);
    ll.display();
    cout<<ll.getSize()<<endl;
    ll.deleteAtIndex(0);
    ll.display();
    cout<<ll.getSize()<<endl;
}