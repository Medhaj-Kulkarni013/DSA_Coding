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

void displayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sumOfTree(TreeNode* root){
    if(root==NULL) return 0;
    int leftSum = sumOfTree(root->left);
    int rightSum = sumOfTree(root->right);
    int ans = root->val + leftSum + rightSum;
    return ans;
}

int sizeOfTree(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

int maxOfTree(TreeNode* root){
    if(root==NULL) return INT_MIN;
    int lMax = maxOfTree(root->left);
    int rMax = maxOfTree(root->right);
    return max(root->val,max(lMax,rMax));
}

int minOfTree(TreeNode* root){
    if(root==NULL) return INT_MAX;
    int lMin = minOfTree(root->left);
    int rMin = minOfTree(root->right);
    return min(root->val,min(lMin,rMin));
}

int ProductOfTree(TreeNode* root){
    if(root==NULL) return 1;
    int leftProduct = ProductOfTree(root->left);
    int rightProduct = ProductOfTree(root->right);
    int ans = root->val*leftProduct*rightProduct;
    return ans;
}

int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
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

    displayTree(a);
    cout<<endl;
    cout<<sumOfTree(a);
    cout<<endl;
    cout<<sizeOfTree(a);
    cout<<endl;
    cout<<maxOfTree(a);
    cout<<endl;
    cout<<minOfTree(a);
    cout<<endl;
    cout<<ProductOfTree(a);
    cout<<endl;
    cout<<levels(a);
    cout<<endl;
}