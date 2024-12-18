#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *next;
    int data;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtBeg(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAtPos(struct Node *head, int data, int pos)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *aNode, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = aNode->next;
    aNode->next = ptr;
    return head;
}

struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head = NULL;
    int choice, data, pos;

    do
    {
        printf("\n----- Singly Linked List Operations -----\n");
        printf("1. Traversal\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Position\n");
        printf("5. Insert after Node\n");
        printf("6. Delete at First\n");
        printf("7. Delete at Index\n");
        printf("8. Delete at Last\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nLinked List traversal:\n");
            traversal(head);
            break;
        case 2:
            printf("Enter the element to insert at the beginning: ");
            scanf("%d", &data);
            head = insertAtBeg(head, data);
            printf("Element %d inserted at the beginning.\n", data);
            break;
        case 3:
            printf("Enter the element to insert at the end: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            printf("Element %d inserted at the end.\n", data);
            break;
        case 4:
            printf("Enter the element to insert: ");
            scanf("%d", &data);
            printf("Enter the position to insert: ");
            scanf("%d", &pos);
            head = insertAtPos(head, data, pos);
            printf("Element %d inserted at position %d.\n", data, pos);
            break;
        case 5:
            printf("Enter the element to insert after: ");
            scanf("%d", &data);
            struct Node *aNode;
            aNode = head;
            while (aNode->data != data)
            {
                aNode = aNode->next;
            }
            printf("Enter the element to insert: ");
            scanf("%d", &data);
            head = insertAfterNode(head, aNode, data);
            printf("Element %d inserted after %d.\n", data, aNode->data);
            break;
        case 6:
            if (head == NULL)
            {
                printf("Linked list is empty. Cannot delete.\n");
            }
            else
            {
                head = deleteAtFirst(head);
                printf("First element deleted from the linked list.\n");
            }
            break;
        case 7:
            if (head == NULL)
            {
                printf("Linked list is empty. Cannot delete.\n");
            }
            else
            {
                printf("Enter the index of the element to delete: ");
                scanf("%d", &pos);
                head = deleteAtIndex(head, pos);
                printf("Element at index %d deleted from the linked list.\n", pos);
            }
            break;
        case 8:
            if (head == NULL)
            {
                printf("Linked list is empty. Cannot delete.\n");
            }
            else
            {
                head = deleteAtLast(head);
                printf("Last element deleted from the linked list.\n");
            }
            break;
        case 9:
            printf("Exiting from the program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 9);

    return 0;
}

