#include<bits/stdc++.h>
using namespace std;
void removeDup(string& s){
    int n = s.length();
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<n; i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(!st.empty()){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    removeDup(s);
    cout<<s<<endl;
}