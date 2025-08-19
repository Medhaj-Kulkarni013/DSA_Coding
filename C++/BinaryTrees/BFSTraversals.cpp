#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public :
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void PreOrder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(TreeNode* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}

void PostOrder(TreeNode* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->val<<" ";
}

void nthLevelRev(TreeNode* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return; // save time complexity by not traversing further below
    }
    nthLevel(root->right,curr+1,level);
    nthLevel(root->left,curr+1,level);
}

void nthLevel(TreeNode* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return; // save time complexity by not traversing further below
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}

int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

void levelOrder(TreeNode* root){
    if(root==NULL) return;
    int n = levels(root); 
    for(int i=1; i<=n; i++){
        nthLevel(root,1,i);
    }
}

int main(){
    TreeNode* a = new TreeNode(1); // root node
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3); 
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7); 

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    PreOrder(a);
    cout<<endl;
    InOrder(a);
    cout<<endl;
    PostOrder(a);
    cout<<endl;
    nthLevel(a,1,3);
    cout<<endl;
    levelOrder(a);
}