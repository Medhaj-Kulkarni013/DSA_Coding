#include<iostream>
#include<vector>
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
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    vector<int> v = {1,2,3,4,5};
    Node* temp = a;
    for(int i=1; i<=4; i++){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<temp->val;
    cout<<endl;
    for(int i=0; i<4; i++) cout<<v[i]<<" ";
}