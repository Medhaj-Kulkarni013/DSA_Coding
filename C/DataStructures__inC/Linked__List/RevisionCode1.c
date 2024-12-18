#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void no_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    printf("The Linked List is empty");
    struct node *ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("The number of nodes are : %d\n",count);

}

void print_data(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

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

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data;
    printf("Enter the data in 1 node : ");
    scanf("%d",&head->data);
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data;
    printf("Enter the data in 2 node : ");
    scanf("%d",&current->data);
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data;
    printf("Enter the data in 3 node : ");
    scanf("%d",&current->data);
    current->link=NULL;
    head->link->link=current;

    no_of_nodes(head);

    print_data(head);

    add_at_end(head,67);
    printf("\n");
    no_of_nodes(head);
    print_data(head);

    return 0;
}