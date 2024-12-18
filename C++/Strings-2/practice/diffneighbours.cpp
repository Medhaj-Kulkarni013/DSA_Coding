#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int count = 0;
    for(int i=1; i<str.length(); i++){
        if(i-1==0 || i==str.length()-1){
            if(str[i-1]!=str[i]){
                count++;
            }
            else continue;
        }
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]) count++;
        else continue;
    }
    cout<<count;
}