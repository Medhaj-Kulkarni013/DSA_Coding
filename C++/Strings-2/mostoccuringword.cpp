#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // int max = 0;
    // for(int i=0; i<v.size(); i++){
    //     int count = 1;
    //     for(int j=i+1; j<v.size(); j++){
    //         if(v[i]==v[j]) count++;
    //         else continue;
    //     }
    //     if(count>max) max = count;
    // }
    // for(int i=0; i<v.size(); i++){
    //     int count = 1;
    //     for(int j=i+1; j<v.size(); j++){
    //         if(v[i]==v[j]) count++;
    //         else continue;
    //     }
    //     if(count==max) cout<<v[i]<<" "<<max<<endl;
    // }
    sort(v.begin(),v.end());
    int max = 0;
    int count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(max<count) max = count;
    }
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(max==count) cout<<v[i]<<" "<<max<<endl;
    }
}