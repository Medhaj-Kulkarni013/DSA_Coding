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
    while (ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void add_at_pos(struct node *head,int data,int pos){
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->link=NULL;
    struct node *ptr=head;
    pos--;
    while(pos!=1){
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data;
    printf("The data in 1st node : ");
    scanf("%d",&head->data);
    head->link=NULL;

    int data2;
    printf("The data in 2nd node : ");
    scanf("%d",&data2);
    add_at_end(head,data2);

    int data3;
    printf("The data in 3rd node : ");
    scanf("%d",&data3);
    add_at_end(head,data3);

    int data4 , pos=3;
    printf("The data in inserting node : ");
    scanf("%d",&data4);
    add_at_pos(head,data4,pos);

    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}