#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void BFS(TreeNode* root){
    if(!root) return;
    queue<TreeNode*> q;
    if(root) q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            TreeNode* temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<endl;
    }
}

TreeNode* ConstructBT(int arr[], int n){
    TreeNode* root = new TreeNode(arr[0]);
    int i = 1, j = 2;
    queue<TreeNode*> q;
    if(root) q.push(root);
    while(!q.empty() && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;

        if(arr[i]!=INT_MIN) l = new TreeNode(arr[i]);
        else l = NULL;
        if(j<n && arr[j]!=INT_MIN) r = new TreeNode(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

        i += 2;
        j += 2;
    }
    return root;
}

void leftBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void bottomBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right==NULL) rightBoundary(root->left);
    rightBoundary(root->right);
    cout<<root->val<<" ";
}

void Boundary(TreeNode* root){
    if(root && (root->left || root->right)) cout<<root->val<<" ";
    leftBoundary(root->left);
    bottomBoundary(root);
    rightBoundary(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = ConstructBT(arr,n);
    BFS(root);
    cout<<endl;
    Boundary(root);
}