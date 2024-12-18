#include<iostream>
#include<algorithm>
using namespace std;
void subsetDup(string ans, string original, bool flag){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    // if(original.length()==1){ NO NEED OF THIS IF CONDITION
    //     if(flag==true) subsetDup(ans+ch,original.substr(1),true);
    //     subsetDup(ans,original.substr(1),true);
    //     return;
    // }

    // char dh = original[1]; working becoz its a string
    char dh = '#';
    if(original.length()!=1) dh = original[1]; // more correct;
    if(dh==ch){
        if(flag==true) subsetDup(ans+ch,original.substr(1),true);
        subsetDup(ans,original.substr(1),false);
    }
    else{
        if(flag==true) subsetDup(ans+ch,original.substr(1),true);
        subsetDup(ans,original.substr(1),true);
    }
}
int main(){
    string str = "aaba";
    sort(str.begin(),str.end());
    subsetDup("",str,true);
}