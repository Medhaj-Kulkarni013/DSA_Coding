#include<iostream>
using namespace std;
int main(){
    // My Method

    int arms = 0;
    for(int i=1; i<=500; i++){
        int a = i;
        int b = a;
        int ld1 = a%10;
        a = a/10;
        int ld2 = a%10;
        a = a/10;
        int ld3 = a%10;
        arms = (ld1*ld1*ld1) + (ld2*ld2*ld2) + (ld3*ld3*ld3);
        if(b==arms) cout<<arms<<" ";
       }

    // General Method

    // for(int i=1; i<=500; i++){
    //     int a = i;
    //     int arms = 0;
    //     while(a>0){
    //         int lastdigit = a%10;
    //         arms = arms + lastdigit*lastdigit*lastdigit;
    //         a /= 10;
    //     }
    //     if(i==arms) cout<<arms<<" ";
    // }
}