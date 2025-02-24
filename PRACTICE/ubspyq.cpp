#include<iostream>
#include<string>
using namespace std;
int main(){
    string P = "giraffe";
    string Q = "01111001111111111011111111";
    int n = P.length();
    int i = 0;
    int j = 0;
    int count = 0;
    int k = 2;
    int maxlen = 0;
    while(j<n){
        if(Q[P[j]-'a']=='0') count++;
        while(count>k){
            if(Q[P[i]-'a']=='0') count--;
            i++;
        }
        maxlen = max(j-i+1,maxlen);
        j++;
    }
    cout<<maxlen;
}