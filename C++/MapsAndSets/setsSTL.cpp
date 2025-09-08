#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    // All operations in unordered set are O(1)
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(1);
    // set stores only unique values
    cout<<s.size()<<endl;
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    int target = 4;
    // s.find() searches inside the set, and if target is not found it returns
    // last element in the set. 
    if(s.find(target)!=s.end()) cout<<"exists"<<endl;
    else cout<<"does not exists"<<endl;
    
    s.erase(1);
    cout<<s.size()<<endl;
}