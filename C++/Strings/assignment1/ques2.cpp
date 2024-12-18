#include<iostream>
using namespace std;
bool isConsonant(char ch){
    if(ch<65) return false;
    if(ch>90 && ch<97) return false;
    if(ch>122) return false;
    if(ch=='a' || ch=='A') return false;
    if(ch=='e' || ch=='E') return false;
    if(ch=='i' || ch=='I') return false;
    if(ch=='o' || ch=='O') return false;
    if(ch=='u' || ch=='U') return false;
    else true;
}
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(isConsonant(str[i])) count++;
        else continue;
    }
    cout<<"The total consonants in string are : "<<count;
}