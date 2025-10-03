#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

string solve(string val1, char op, string val2){
    string ans = "";
    ans += op + val1 + val2;
    return ans;
}

int main(){
    string s = "3+(2+6)*4/8-3";
    stack<string> val; 
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])) val.push(to_string(s[i]-48));
        else{
            if(op.empty() || s[i]=='(' || op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = solve(val1,ch,val2);
                    val.push(ans); 
                }
                op.pop();
            }
            else if(priority(op.top()) < priority(s[i])) op.push(s[i]);
            else{ // priority(op.top()) >= priority(s[i])
                while(!op.empty() && priority(op.top()) >= priority(s[i])){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = solve(val1,ch,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while(!op.empty()){
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        string ans = solve(val1,ch,val2);
        val.push(ans);
    }
  
    cout<<val.top()<<endl;
}