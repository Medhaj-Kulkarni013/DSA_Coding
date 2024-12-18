#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*link;
};

void add_at_end(struct node *head,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    struct node *ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

struct node *del_at_beg(struct node*head){
    if(head==NULL){
        printf("The LL is empty");
    }
    else{
    struct node *temp=head;
    head=temp->link;
    free(temp);
    temp=NULL;
    }

    return head;
}

void print_data(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
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
    struct node *ptr=del_at_beg(head);
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}