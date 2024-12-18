#include<iostream>
#include<string>
using namespace std;
// classes are pass by value in c++
// use pointers to make them pass by reference
class Car{
public:
    string name;
    string type;
    int price;
};
void change(Car *x){
    // (*x).name = "Kia Seltos";
    // (*x).price = 1800000;

    // using 'x->' operator instead of '*x.'
    x->name = "Kia Seltos";
    x->price = 1800000;
}

int main(){
    Car c1 = {"Renault Kiger","SUV",1200000};
    Car c2 = {"Hyundai i-10","Hatch-back",800000};

    cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<endl;
    cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<endl;

    change(&c1);
    cout<<endl;
    cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<endl;
    cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<endl;
}