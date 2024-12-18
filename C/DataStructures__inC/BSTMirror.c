#include <stdio.h>
#include <stdlib.h>

// Structure for a node of the binary search tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Structure for a stack used in traversal
struct Stack {
    struct Node** array;
    int top;
    int capacity;
};

// Function to create a new node with the given data
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to create a new stack
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (struct Node**)malloc(stack->capacity * sizeof(struct Node*));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push a node onto the stack
void push(struct Stack* stack, struct Node* node) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = node;
}

// Function to pop a node from the stack
struct Node* pop(struct Stack* stack) {
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top--];
}

// Function to get the top node of the stack
struct Node* top(struct Stack* stack) {
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top];
}

// Function to create the mirror image of a binary tree without disturbing the original tree
struct Node* createMirrorImage(struct Node* root) {
    if (root == NULL)
        return NULL;
    struct Node* mirror = newNode(root->data);
    struct Stack* stack = createStack(100);
    push(stack, root);
    struct Stack* mirrorStack = createStack(100);
    push(mirrorStack, mirror);

    while (!isEmpty(stack)) {
        struct Node* current = pop(stack);
        struct Node* mirrorCurrent = pop(mirrorStack);

        if (current->right != NULL) {
            mirrorCurrent->left = newNode(current->right->data);
            push(stack, current->right);
            push(mirrorStack, mirrorCurrent->left);
        }

        if (current->left != NULL) {
            mirrorCurrent->right = newNode(current->left->data);
            push(stack, current->left);
            push(mirrorStack, mirrorCurrent->right);
        }
    }
    return mirror;
}

// Function to calculate the height of a binary tree using non-recursive method
int calculateHeight(struct Node* root) {
    if (root == NULL)
        return 0;
    struct Stack* stack = createStack(100);
    push(stack, root);
    int height = 0;
    while (!isEmpty(stack)) {
        int size = stack->top + 1;
        while (size > 0) {
            struct Node* current = pop(stack);
            if (current->left != NULL)
                push(stack, current->left);
            if (current->right != NULL)
                push(stack, current->right);
            size--;
        }
        height++;
    }
    return height;
}

// Function to display the inorder traversal of a binary tree
void inorderTraversal(struct Node* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Function to delete a binary tree
void deleteTree(struct Node* root) {
    if (root == NULL)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}

// Main function
int main() {
    struct Node* root = NULL;
    int data;
    
    printf("Enter elements to insert into the BST (-1 to exit):\n");
    while (1) {
        scanf("%d", &data);
        if (data == -1)
            break;
        if (root == NULL)
            root = newNode(data);
        else {
            struct Node* current = root;
            struct Node* parent = NULL;
            while (current != NULL) {
                parent = current;
                if (data < current->data)
                    current = current->left;
                else if (data > current->data)
                    current = current->right;
                else { // If data already exists in the BST
                    printf("Duplicate data not allowed.\n");
                    break;
                }
            }
            if (current == NULL) {
                if (data < parent->data)
                    parent->left = newNode(data);
                else
                    parent->right = newNode(data);
            }
        }
    }

    printf("Inorder traversal of original tree:\n");
    inorderTraversal(root);
    printf("\n");

    // Create mirror image without disturbing the original tree
    struct Node* mirror = createMirrorImage(root);

    printf("Inorder traversal of mirror image tree (without disturbing original tree):\n");
    inorderTraversal(mirror);
    printf("\n");

    // Display height of the original tree using non-recursive method
    int height = calculateHeight(root);
    printf("Height of the original tree: %d\n", height);

    // Delete the tree
    deleteTree(root);
    deleteTree(mirror);

    return 0;
}
