#include <stdio.h>
#include <stdlib.h>

// Node structure for threaded binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int isThreaded; // Flag to indicate if the right pointer is a thread
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->isThreaded = 0;
    return newNode;
}

// Function to insert a node into the threaded binary tree
void insert(struct Node** root, int data) {
    struct Node* newNode = createNode(data);
    if (*root == NULL) {
        *root = newNode;
    } else {
        struct Node* current = *root;
        struct Node* parent;
        while (1) {
            parent = current;
            if (data < current->data) {
                current = current->left;
                if (current == NULL) {
                    parent->left = newNode;
                    newNode->right = parent; // Thread the right pointer
                    newNode->isThreaded = 1;
                    return;
                }
            } else {
                if (current->isThreaded || current->right == NULL) {
                    newNode->left = current->right;
                    current->right = newNode;
                    current->isThreaded = 0; // Reset thread flag
                    newNode->right = current->right;
                    newNode->isThreaded = 1; // Thread the right pointer
                    return;
                }
                current = current->right;
            }
        }
    }
}

// Function to find the leftmost node in the threaded binary tree
struct Node* leftMost(struct Node* root) {
    while (root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to traverse the threaded binary tree in postorder
void postorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    struct Node* current = leftMost(root);
    struct Node* lastVisited = NULL;

    while (current != NULL) {
        if (current->isThreaded || current->right == lastVisited) {
            printf("%d ", current->data);
            lastVisited = current;
            current = current->right;
        } else {
            struct Node* predecessor = current->right;
            while (!predecessor->isThreaded && predecessor->left != NULL && predecessor->left != lastVisited) {
                predecessor = predecessor->left;
            }
            if (predecessor->left == NULL || predecessor->left == lastVisited) {
                predecessor->left = NULL; // Break the thread
                lastVisited = current;
                current = current->right;
            } else {
                predecessor->left = current;
                lastVisited = current;
                current = current->left;
            }
        }
    }
}


// Function to free the memory allocated for the threaded binary tree
void freeTree(struct Node* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    if (!root->isThreaded) {
        freeTree(root->right);
    }
    free(root);
}

int main() {
    struct Node* root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    insert(&root, 20);
    insert(&root, 3);
    insert(&root, 8);
    insert(&root, 15);
    insert(&root, 25);

    printf("Postorder Traversal of the threaded binary tree: ");
    postorderTraversal(root);
    printf("\n");

    // Free memory allocated for the tree
    freeTree(root);

    return 0;
}
