#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

bool isMax(TreeNode* root){
    if(root==NULL) return true;
    if(root->right && root->val < root->right->val) return false;
    if(root->left && root->val < root->left->val) return false;
    return isMax(root->left) && isMax(root->right);
}

int CountNodes(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}

bool isCBT(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    int n = CountNodes(root);
    int count = 0;
    while(count<n){
        TreeNode* temp = q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(!q.empty()){
        if(q.front()) return false;
        q.pop();
    }
    return true;
}

int main(){
    TreeNode* a = new TreeNode(20);
    TreeNode* b = new TreeNode(11);
    TreeNode* c = new TreeNode(15);
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(7);
    TreeNode* f = new TreeNode(12);

    a->left = b, a->right = c;
    b->left = d, b->right = e;
    c->left = f;

    TreeNode* root = a;
    if(isMax(root) && isCBT(root)) cout<<"This Binary Tree is a MaxHeap."<<endl;
    else cout<<"This Binary Tree is NOT a MaxHeap."<<endl;
}