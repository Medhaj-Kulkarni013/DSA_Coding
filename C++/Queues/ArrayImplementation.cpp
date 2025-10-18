#include<bits/stdc++.h>
using namespace std;

class Queue{
private :
    int arr[5];
    int f;
    int b;
public :
    Queue(){
        f = 0;
        b = 0;
    }
    void push(int val){
        if(b-f==5){
            cout<<"Queue Overflow!!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"Queue Underflow!!"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        return arr[f];
    }
    int back(){
         if(b-f==0){
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    void display(){
        for(int i=f; i<=b-1; i++){
            cout<<arr[i]<<" ";
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
    q.display();
    q.push(60);
    q.pop();
    q.display();
}