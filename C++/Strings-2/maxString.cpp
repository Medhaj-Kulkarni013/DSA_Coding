#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
  string s[] = {"0123","0023","456","00182","940","2901","004321"};
  int n = sizeof(s)/sizeof(s[0]);
  int max = INT_MIN;
  for(int i=0; i<n; i++){
    int x = stoi(s[i]);
    if(x>max) max = x;
  }
  cout<<max;
}