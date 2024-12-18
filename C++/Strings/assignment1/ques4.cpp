#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cout<<"Enter a string of even length : ";
  getline(cin,s);
  int n = s.length();
  cout<<s<<endl;
  reverse(s.begin()+n/2,s.end());
  cout<<s;
}