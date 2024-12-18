#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // // condition ? true : false;
    // (n%2==0) ? cout<<"Even" : cout<<"Odd";
    // return 0;
    int x ;
    cout<<"enter month number : ";
    cin>>x;

    switch(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12){
        case 1 :
        cout<<"31";
    }

    switch(x==4 || x==6 ||  x==9 || x==11){
        case 1 :
        cout<<"30";
    }

    switch(x==2){
        case 1 :
        cout<<"28";
    }
} 