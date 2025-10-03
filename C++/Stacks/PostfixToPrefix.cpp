#include<bits/stdc++.h>
using namespace std;

string solve(string val1, char op, string val2){
    string ans = "";
    ans += op + val1 + val2;
    return ans;
}

int main(){
    // string s = "26+4*8/3-"; // infix was (2+6)*4/8-3
    string s = "264*8/+3-"; // infix was 2+6*4/8-3
    stack<string> val;
    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])) val.push(to_string(s[i]-48));
        else{
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            char op = s[i];
            string ans = solve(val1,op,val2);
            val.push(ans);
        }
    }
    cout<<val.top();
}