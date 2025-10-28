#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> pq1;
    pq1.push(1);
    pq1.push(5);
    pq1.push(7);
    pq1.push(3);
    pq1.push(2);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;

    cout<<endl;
    // Min Heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(1);
    pq2.push(5);
    pq2.push(7);
    pq2.push(3);
    pq2.push(2);
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top()<<endl;
}