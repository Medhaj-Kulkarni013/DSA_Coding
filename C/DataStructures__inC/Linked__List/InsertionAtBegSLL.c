#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void print_data(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

struct node *add_at_beg(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=head; // node inserted at the begining and linked to the previous first node
    head=temp;  // head pointer now has access/address of new first node

    return head;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=13;
    current->link=NULL;
    head->link->link=current;

    print_data(head);
    printf("\n");
    struct node *ptr;
    ptr=add_at_beg(head,65);
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }


    return 0;
}