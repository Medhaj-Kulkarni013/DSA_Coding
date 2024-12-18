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

    return;
}

int pop(){
    if(top==-1){
        printf("Stack Underflow");
        exit(1);
    }
    int value=stack_arr[top];
    top--;
    return value;
}

int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    int data = pop();
    for(int i=top; i>=0; i--){
        printf("%d ",stack_arr[i]);
    }
}