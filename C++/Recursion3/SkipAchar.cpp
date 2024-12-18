// Skip all occur of a char in string and print it
#include<iostream>
#include<string>
using namespace std;
// not effective function as new n-1 size string created evertime
void removeChar(string ans, string original){ 
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='e') removeChar(ans,original.substr(1));
    else removeChar(ans+=ch,original.substr(1));
}
void removeChar2(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch=='e') removeChar2(ans,original,idx+1);
    else removeChar2(ans+ch,original,idx+1);
}
int main(){
    string str = "elephant is excellent";
    removeChar("",str); 
    removeChar2("",str,0); 
}