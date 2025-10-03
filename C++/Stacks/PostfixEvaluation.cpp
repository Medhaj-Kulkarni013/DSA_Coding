#include<bits/stdc++.h>
using namespace std;

int solve(int val1, char op, int val2){
    if(op=='+') return val1+val2;
    else if(op=='-') return val1-val2;
    else if(op=='*') return val1*val2;
    else if(op=='/') return val1/val2;
}

int main(){
    string s = "26+4*8/3-"; // infix was (2+6)*4/8-3
    stack<int> val;
    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])) val.push(s[i]-48);
        else{
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char op = s[i];
            int ans = solve(val1,op,val2);
            val.push(ans);
        }
    }
    cout<<val.top();
}