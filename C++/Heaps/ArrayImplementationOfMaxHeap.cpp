#include<iostream>
using namespace std;

class MaxHeap{
public:
    int arr[51];
    int idx;
    MaxHeap(){
        idx = 0;
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
    int top(){
        if(idx==0){
            cout<<"Heap is empty!!"<<endl;
            return 0;
        } 
        return arr[1];
    }
    void push(int x){
        idx++;
        arr[idx] = x;
        // rearrangement
        int i = idx;
        int parent = i/2;
        while(i!=1){
            if(arr[parent] < arr[i]){
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
        arr[1] = arr[idx];
        idx--;
        int i = 1;
        while(true){
            int l = 2*i;
            int r = 2*i+1;
            int maxIdx = i;

            if(l<=idx && arr[maxIdx] < arr[l]) maxIdx = l;
            if(r<=idx && arr[maxIdx] < arr[r]) maxIdx = r;

            if(maxIdx!=i){
                swap(arr[maxIdx],arr[i]);
                i = maxIdx;
            }
            else break;
        }
    }
};

int main(){
    MaxHeap pq;
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
    pq.push(50);
    pq.display();
}