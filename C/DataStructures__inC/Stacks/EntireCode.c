// Stack Operations


#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

int isFull(){
    if(top==MAX-1)
    return 1;
    else
    return 0;
}

int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}

void push(int data){
    if(isFull()){
    printf("Stack Overflow");
    exit(1);
    }
    top++;
    stack_arr[top]=data;
}

int pop(){
    if(isEmpty()){
    printf("Stack Underflow");
    exit(1);
    }
    int value=stack_arr[top];
    top--;
    return value;
}

int peek(){
    if(isEmpty()){
    printf("Stack Underflow");
    exit(1);
    }
    return stack_arr[top];
}

void print(){
    if(isEmpty()){
    printf("Stack Underflow");
    exit(1);
    }
    for(int i=top; i>=0; i--){
        printf("%d ",stack_arr[i]);
    }
}

int main()
{
    int choice,data;
    while(1)
    {
        printf("\n");
        printf("1.Push()\n");
        printf("2.Pop()\n");
        printf("3.Print the top element of the stack\n");
        printf("4.Print all the elements in the stack\n");
        printf("5.Exit\n");
        printf("Enter the element the choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: 
                printf("Enter the element to put in stack : ");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                data = pop();
                printf("%d has been removed out of stack\n",data);
                break;

            case 3:
                data=peek();
                printf("The Top most element of stack is %d\n",data);
                break;

            case 4:
                printf("All the elements in stack are : ");
                print();
                printf("\n");
                break;

            case 5:
                exit(1);

            default:
                printf("Invalid Input...Please renter your choice");
                
        }
    }
    return 0;
}