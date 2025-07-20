#include<bits/stdc++.h>
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

int main(){
    Node a = Node(10);
    Node b = Node(20);
    Node c = Node(30);
    Node d = Node(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    cout<<a.val<<" ";
    cout<<(*a.next).val<<" ";
    cout<<a.next->next->val<<" "; // cout<<(*(*a.next).next).val<<" ";
    cout<<(*(*(*a.next).next).next).val<<" ";

    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);

    d.next = e;
    e->next = f;
    f->next = g;
    g->next = h;

    cout<<(d.next)->val<<" ";
    cout<<e->next->val<<" ";
    cout<<e->next->next->val<<" ";
    cout<<e->next->next->next->val<<" ";
}