#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the size of the string : ";
    // cin>>n;
    // char str[n];
    // for(int i=0; i<n; i++){
    //     cin>>str[i];
    // }
    // int count = 0;
    // for(int i=0; i<n; i++){
    //     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    //         count++;
    //     }
    // }
    // cout<<"Num of vowels in the string are : "<<count;

    // Without using character arrays
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int count = 0;
    int i = 0;
    while(str[i]!='\0'){ // str[i]!='\0' means till last index 
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<"Num of vowels in the string are : "<<count;
}