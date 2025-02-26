#include<iostream>
using namespace std;
class Player{
public:
    int health;
    int score;
    int age;
};
int main(){
    // static memory allocation
    int a = 10;
    int* b = &a;
    cout<<*b<<endl;
    Player medhaj;
    medhaj.age = 20;
    medhaj.health = 100;
    medhaj.score = 90;

    // dynamic memory allocation
    int* c = new int(10);
    cout<<*c<<endl;
    Player* shailaj = new Player;
    (*shailaj).age = 17; // (*shailaj).age => shailaj->age;
    shailaj->health = 100;
    shailaj->score = 80;
}