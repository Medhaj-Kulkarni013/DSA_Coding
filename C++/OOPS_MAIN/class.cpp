#include<bits/stdc++.h>
using namespace std;
class Player{
private :
    int id; // private data member
public : 
    int score; // data members
    int health;
    string name;

    // getters and setters are basically member functions used to access private data members
    void set(int id){ // setter
        this->id = id;
    }

    int get(){ // getter
        return id;
    }
};
class Calculator{
public :
    // data members
    int a;
    int b;

    // member functions
    int add(){
        return a+b;
    }
    int subtract(){
        return a-b;
    }
    int multiply(){
        return a*b;
    }
};
int main(){
    Player p1;
    p1.health = 100;
    p1.score = 90;
    p1.name = "Medhaj";
    p1.set(1);
    cout<<p1.get()<<" "<<p1.name<<" "<<p1.score<<" "<<p1.health<<endl;

    Calculator calci;
    calci.a = 10;
    calci.b = 9;
    cout<<"Addition is : "<<calci.add()<<endl;
    cout<<"Subtraction is : "<<calci.subtract()<<endl;
    cout<<"Multiplication is : "<<calci.multiply()<<endl;
}