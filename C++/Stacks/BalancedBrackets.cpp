#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isBalanced(string& s){
    if(s.length()%2!=0) return false;
    int n = s.length();
    stack<char> st;
    for(int i=0; i<n; i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()) return false;
            else st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s = "()()(())"; 
    cout<<isBalanced(s);
}