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
    if(root==NULL) return;
    queue<TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        cout<<temp->val<<" ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

TreeNode* ConstructBT(int arr[], int n){
    TreeNode* root = new TreeNode(arr[0]);
    int i = 1;
    int j = 2;
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
        if(l) q.push(l);
        if(r) q.push(r);
    
        i += 2;
        j += 2;
    }

    return root;
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root;
    root = ConstructBT(arr,n);
    BFS(root);
}