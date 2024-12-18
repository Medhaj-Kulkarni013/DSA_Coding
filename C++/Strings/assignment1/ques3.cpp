#include<iostream>
using namespace std;
bool isPalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    if(isPalindrome(str)) cout<<"String is a Palindrome.";
    else cout<<"String is NOT a Palindrome.";
}