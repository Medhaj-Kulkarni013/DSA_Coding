#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int n = str.size();
    int count = 0;
    for(int i=1; i<n; i++){
        if(i==n-1 || i-1==0){
            if(str[i]!=str[i-1]) count++;
        }
        else if((str[i]!=str[i-1] && str[i]!=str[i+1])) count++;
    }
    cout<<count;
}