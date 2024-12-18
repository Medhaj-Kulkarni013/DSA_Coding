#include<iostream>
#include<string>
using namespace std;
// no string should have consecutive 1
void binaryString(string s, int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    binaryString(s+'0',n);
    if(s=="" || s[s.length()-1]=='0')  binaryString(s+'1',n);
}
int main(){
    int n = 4;
    binaryString("",n);
}