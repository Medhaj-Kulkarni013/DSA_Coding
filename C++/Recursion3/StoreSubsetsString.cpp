#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubsets(string ans, string original, int idx, vector<string>& s){
    if(idx==original.length()){
        s.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubsets(ans,original,idx+1,s);
    storeSubsets(ans+ch,original,idx+1,s);
}
int main(){
    string str = "abcd";
    vector<string> s;
    storeSubsets("",str,0,s);
    for(string ele : s){
        cout<<ele<<endl;
    }
}