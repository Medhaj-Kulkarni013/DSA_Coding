#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_at_beg(struct node *head,int data){

        struct node *ptr=malloc(sizeof(struct node));
        ptr->data=data;

        ptr->link=head;
        head=ptr;

        printf("New element added at beginig of list is 13 : ");
        return head;
        
}


int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;

    head->link=ptr;

    ptr=add_at_beg(head,13);
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}
