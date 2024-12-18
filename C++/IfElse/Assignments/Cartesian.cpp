#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the X-coordinate : ";
    cin>>x;
    int y;
    cout<<"Enter the Y-coordinate : ";
    cin>>y;
    if(x==0 && y!=0)
        cout<<"("<<x<<","<<y<<")"<<" Lies on Y-axis";
    else if(x!=0 && y==0)
        cout<<"("<<x<<","<<y<<")"<<" Lies on X-axis";
    else if(x==0 && y==0)
        cout<<"("<<x<<","<<y<<")"<<" Lies on Origin";
    else
        cout<<"("<<x<<","<<y<<")"<<" Lies on Co-ordinate axis";

        return 0;
}