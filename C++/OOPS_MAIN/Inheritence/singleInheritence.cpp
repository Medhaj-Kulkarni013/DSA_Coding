#include<iostream>
using namespace std;
class A{
public :
    int a_public;
protected :
    int a_protected;
private :
    int a_private;
};
class B : public A{
public :
    int b_public;
    void show(){
        a_protected = 9;      
    }
};
int main(){

}