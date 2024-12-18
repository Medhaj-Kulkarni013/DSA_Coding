#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

void push(int data){
    if(top==MAX-1)
    printf("Stack Overflow");

    top++;
    stack_arr[top]=data;
}

int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);

    return 0;
}
