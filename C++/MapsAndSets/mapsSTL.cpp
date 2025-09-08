#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // All operations in unordered maps are O(1)
    unordered_map<string,int> map; // map<key,value>

    // Method 1 for insertion

    // pair<string,int> p1;
    // p1.first = "Medhaj";
    // p1.second = 35;

    // pair<string,int> p2;
    // p2.first = "Prateek";
    // p2.second = 48;

    // pair<string,int> p3;
    // p3.first = "Yash";
    // p3.second = 30;

    // map.insert(p1);
    // map.insert(p2);
    // map.insert(p3);

    // Method 2 for insertion

    map["Medhaj"] = 35;
    map["Prateek"] = 48;
    map["Yash"] = 30;

    for(pair<string,int> ele : map){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
    map.erase("Yash");
    for(auto ele : map){
        cout<<ele.first<<" "<<ele.second<<endl;
    }


}