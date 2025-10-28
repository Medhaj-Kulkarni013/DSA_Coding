#include<iostream>
#include<queue>
using namespace std;
class myComparator{
    public:
        bool operator()(int a, int b){ // this basically is a functor
            return a > b;
        }
};
int main(){
    // priority_queue<int> pq; // this is default maxHeap which internally uses less than comparator
    // logic behind using less than is hidden in its imlementation where if parent->val < child->val then swap.

    // below is the entire declaration of maxHeap where less<int> is the comparator
    priority_queue<int,vector<int>,less<int>> maxHeap;
    maxHeap.push(4);
    maxHeap.push(2);
    maxHeap.push(1);
    maxHeap.push(8);
    maxHeap.push(6);
    cout<<maxHeap.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> minHeap; // this is the minHeap which internally uses greater than comparator
    // logic behind using greater than is hidden in its imlementation where if parent->val > child->val then swap.
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(1);
    minHeap.push(8);
    minHeap.push(6);
    cout<<minHeap.top()<<endl;

    // if i have to pass my own comparator in this heap then this time i cannot use bool func()
    // as heap is data structure and not a function like built in sort().

    // So i have to define my comparator inside a class 
    priority_queue<int,vector<int>,myComparator> pq; // this is a minheap
    pq.push(4);
    pq.push(2);
    pq.push(1);
    pq.push(8);
    pq.push(6);
    cout<<pq.top()<<endl;
}