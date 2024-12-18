#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
        string name;
        string type;
        int price;
};
int main(){
    Car c1 = {"Renault Kiger","SUV",1200000};
    Car c2 = {"Kia Sonet","SUV",1500000};

    cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<endl;
    cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<endl;
}