#include<iostream>
#include<vector>
using namespace std;
class MinHeap{
public:
    int arr[51];
    int idx;
    MinHeap(){
        idx = 0;
    }
    int top(){
        if(idx==0){
            cout<<"Heap is empty!!";
            return 0;
        }
        return arr[1];
    }
    bool empty(){
        return idx==0;
    }
    int size(){
        return idx;
    }
    void display(){
        for(int i=1; i<=idx; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    void push(int x){
        idx++;
        arr[idx] = x;
        // rearrangement O(LogN)
        int i = idx;
        int parent = i/2;
        while(i!=1){
            if(arr[parent] > arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
                parent = i/2;
            }
            else break;  
        }
    }
    void pop(){
        if(idx==0){
            cout<<"Heap is empty!!";
            return;
        }
        arr[1] = arr[idx]; // get last ele on top
        idx--;
        // Now rearrange the element
        // Heapify down O(LogN)
        int i = 1;
        while(true){
            int l = 2*i;
            int r = 2*i+1;
            int minIdx = i; // minIdx is the index of minimum child

            if(l<=idx && arr[l] < arr[minIdx]) minIdx = l;
            if(r<=idx && arr[r] < arr[minIdx]) minIdx = r;

            if(minIdx!=i){
                swap(arr[i],arr[minIdx]);
                i = minIdx;
            }
            else break;
        }
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.display();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(4);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.push(7);
    pq.display();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
}