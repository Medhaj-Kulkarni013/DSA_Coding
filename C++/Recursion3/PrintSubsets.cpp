#include<iostream>
#include<string>
using namespace std;
void PrintSubsets(string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    PrintSubsets(ans+ch,original.substr(1));
    PrintSubsets(ans,original.substr(1));
}
void PrintSubsets2(string ans, string original, int idx){
    if(original.length()==idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    PrintSubsets2(ans+ch,original,idx+1);
    PrintSubsets2(ans,original,idx+1);
}
int main(){
    string str = "abc";
    PrintSubsets("",str);
    PrintSubsets2("",str,0);
}