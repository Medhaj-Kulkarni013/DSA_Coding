#include<bits/stdc++.h>
using namespace std;

string solve(string val1, char op, string val2){
    string ans = "";
    ans += val1 + val2 + op;
    return ans;
}

int main(){
    // string s = "-+2/*6483"; // Infix is 2+6*4/8-3
    string s ="-+3/*+26483"; // Infix is 3+(2+6)*4/8-3 
    stack<string> val;
    for(int i=s.length()-1; i>=0; i--){
        if(isdigit(s[i])) val.push(to_string(s[i]-48));
        else{
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            char op = s[i];
            string ans = solve(val1,op,val2);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}