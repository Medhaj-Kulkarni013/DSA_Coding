#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    struct node *ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_data(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

void del_at_end(struct node *head){
    if(head==NULL)
    printf("The LL is empty");
    else if(head->link==NULL)
    free(head);
    else{
    struct node *temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
        free(temp->link);
        temp->link=NULL;
    }
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    add_at_end(head,98);
    add_at_end(head,3);
    print_data(head);
    printf("\n");
    del_at_end(head);
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}