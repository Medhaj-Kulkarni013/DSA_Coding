#include<bits/stdc++.h>
using namespace std;
class Gun{
public :
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    class Helmet{
    private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    Helmet hel;
public:
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void isAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet* hel = new Helmet;
        hel->setLevel(level);
        if(level==1) hel->setHp(70);
        else if(level==2) hel->setHp(85);
        else hel->setHp(100);
        this->hel = *hel;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool getAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<hel.getLevel()<<endl;
        cout<<hel.getHp()<<endl;
    }
};
int main(){
    Player* medhaj = new Player;
    medhaj->setAge(20);
    medhaj->setHealth(100);
    medhaj->setScore(95);
    medhaj->isAlive(true);
    Gun* akm = new Gun;
    akm->ammo = 100;
    akm->damage = 50;
    akm->scope = 2;
    medhaj->setGun(*akm);
    Gun gun1 = medhaj->getGun();
    cout<<gun1.ammo<<endl;
    cout<<gun1.damage<<endl;
    cout<<gun1.scope<<endl;
    medhaj->setHelmet(2);
    medhaj->getHelmet();
}