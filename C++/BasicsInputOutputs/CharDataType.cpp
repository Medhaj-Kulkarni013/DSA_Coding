#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    char ch2 = '0';
    char ch3 = 'A';
    cout<<(int)ch<<endl; // Will print ASCII of a i.e 97
    cout<<(int)ch2<<endl;
    cout<<(int)ch3<<endl;// Will print ASCII of A i.e 65
    int x = (int)ch;
    int y = (int)ch2;
    int z = (int)ch3;
    cout<<x<<" "<<y<<" "<<z;
}