#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

int main(){
    // Node a = Node(10);
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout<<a.val<<" ";
    cout<<b.val<<" ";
    cout<<c.val<<" ";
    cout<<d.val<<" ";
    cout<<endl;
    cout<<a.val<<" ";
    cout<<a.next->val<<" "; // cout<<(*a.next).val<<" ";
    cout<<a.next->next->val<<" "; // cout<<(*(*a.next).next).val<<" ";
    cout<<a.next->next->next->val<<" "; // cout<<(*(*(*a.next).next).next).val<<" ";

    //using while loop
    cout<<endl;
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}