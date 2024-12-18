#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;
int main(){
    // small letter string
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    //method 1
    // int max = INT_MIN;
    // for(int i=0; i<str.length(); i++){
    //     int count = 1;
    //     for(int j=i+1; j<str.length(); j++){
    //         if(str[i]==str[j]) count++;
    //         else continue;
    //     }
    //     if(count>max) max = count;
    // }
    // for(int i=0; i<str.length(); i++){
    //     int count = 1;
    //     for(int j=i+1; j<str.length(); j++){
    //         if(str[i]==str[j]) count++;
    //         else continue;
    //     }
    //     if(count==max){
    //         cout<<"The most occuring character is "<<str[i]<<" "<<max<<" times";
    //         break; 
    //     }
    // }

    // method 2
    vector<int> v(26);
    int ascii;
    for(int i=0; i<str.size(); i++){
        ascii = (int)str[i];
        v[ascii-97]++;
    }
    int max = INT_MIN;
    for(int i=0; i<26; i++){
        if(max<v[i]) max = v[i];
    }
    for(int i=0; i<26; i++){
        if(max==v[i]){
            cout<<(char)(i+97)<<" is the character which appears "<<max<<" times which is max";
        }
    }
}