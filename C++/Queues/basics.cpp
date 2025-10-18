#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    // display
    while(!q.empty()){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<q.size()<<endl;
    
    // displays and retains elements in queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n = q.size();
    while(n>0){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        n--;
    }
    cout<<endl;
    cout<<q.size()<<endl;
}