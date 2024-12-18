#include<stdio.h>
int main()
{
    struct pokemon // User defined datatype(BADA DABBA USKE ANDAR CHOTE DABBE)
    {
        int speed;
        int hp;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=70;
    pikachu.hp=60;
    pikachu.speed=90;
    pikachu.tier='B';
    printf("%c",pikachu.tier);
    return 0;
}