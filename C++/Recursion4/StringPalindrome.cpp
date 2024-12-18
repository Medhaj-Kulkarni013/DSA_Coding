#include<iostream>
#include<string>
using namespace std;
int palindrome(string s, int i, int j){
    if(i>j) return 1;
    if(s[i]!=s[j]) return 0;
    else return palindrome(s,i+1,j-1);
}
int main(){
    string str = "abcdecba";
    cout<<palindrome(str,0,str.length()-1);
}