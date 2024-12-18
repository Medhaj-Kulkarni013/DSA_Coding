#include<bits/stdc++.h>
using namespace std;
// Only lower case alphabets
int main(){
//    string s = "kulkarnii";
//    int n = s.length();
//    int max = INT_MIN;
//    for(int i=0; i<n; i++){
//     int count = 1;
//     for(int j=i+1; j<n; j++){
//         if(s[i]==s[j]) count++;
//         else continue;
//     }
//     if(max<count) max = count;
//    }
//     for(int i=0; i<n; i++){
//         int count=1;
//         char ch = s[i];
//         for(int j=i+1; j<n; j++){
//             if(s[i]==s[j]) count++;
//             else continue;
//         }
//         if(count==max){
//             cout<<ch<<" "<<max<<endl;
//         }
//     }

        string s = "leetcodedd";
        vector<int> arr(26,0);
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            int ascii = (int)ch;
            arr[ascii-97]++;
        }
        int max = 0;
        for(int i=0; i<26; i++){
            if(max<arr[i]) max = arr[i];
        }
        for(int i=0; i<26; i++){
            if(max==arr[i]){
                cout<<(char)(i+97)<<" "<<arr[i]<<endl;
            }
        }
}