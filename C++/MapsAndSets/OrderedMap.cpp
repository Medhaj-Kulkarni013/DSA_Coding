#include<iostream>
#include<map>
using namespace std;
int main(){
    // All operations in unordered maps are O(logn)
    map<string,int> map; // map<key,value>

    map["Yash"] = 30;
    map["Prateek"] = 48;
    map["Medhaj"] = 35;

    for(pair<string,int> ele : map){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
    map.erase("Yash");
    for(auto ele : map){
        cout<<ele.first<<" "<<ele.second<<endl;
    }


}