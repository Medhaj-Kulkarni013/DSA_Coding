#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

int solve(int val1, char op, int val2){
    if(op=='+') return val1+val2;
    else if(op=='-') return val1-val2;
    else if(op=='*') return val1*val2;
    else if(op=='/') return val1/val2;
}

int main(){
    string s = "2+6*4/8-3";
    stack<int> val; // for numbers
    stack<char> op; // for operators

    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])) val.push(s[i]-48);
        else{
            if(op.empty() || priority(op.top()) < priority(s[i])) op.push(s[i]);
            else{ // priority(op.top()) >= priority(s[i])
                while(!op.empty() && priority(op.top()) >= priority(s[i])){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = solve(val1,ch,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while(!op.empty()){
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int ans = solve(val1,ch,val2);
        val.push(ans);
    }

    cout<<val.top()<<endl;
    cout<<2+6*4/8-3<<endl;
}