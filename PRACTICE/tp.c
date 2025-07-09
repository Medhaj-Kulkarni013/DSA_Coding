#include<stdio.h>
int main(){
    static int val = 4;
    val++;
    printf("%d\n",val);
    val = 6;
    printf("%d",val);
}