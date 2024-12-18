#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

int main(){
    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));

    n1->data=1;
    n1->next=n2;
    n1->prev=NULL;

    
    n2->data=1;
    n2->next=n3;
    n2->prev=n1;

    
    n3->data=1;
    n1->next=n2;
    n1->prev=NULL;

    

}