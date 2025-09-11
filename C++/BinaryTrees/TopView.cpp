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

TreeNode* construct(int arr[], int n){
    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    if(arr[0]!=INT_MAX) q.push(root);
    int i = 1;
    int j = 2;
    while(!q.empty() && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MAX) l = new TreeNode(arr[i]);
        else l = NULL;
        if(j<n && arr[j]!=INT_MAX) r = new TreeNode(arr[j]);
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

void topView(TreeNode* root){
    if(!root) return;
    queue<pair<TreeNode*,int>>q;
    unordered_map<int,int> mp; // <level,node->val>

    pair<TreeNode*,int> p;
    p.first = root;
    p.second = 0;
    q.push(p);

    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    while(!q.empty()){
        TreeNode* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();

        if(mp.find(level)==mp.end()) mp[level] = temp->val;
        
        minLevel = min(minLevel,level);
        maxLevel = max(maxLevel,level);

        pair<TreeNode*,int> p;
        if(temp->left){
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right){
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }

    // int minLevel = INT_MAX;
    // int maxLevel = INT_MIN;
    // for(auto ele : mp){
    //     minLevel = min(minLevel,ele.first);
    //     maxLevel = max(maxLevel,ele.first);
    // }
    for(int i=minLevel; i<=maxLevel; i++) cout<<mp[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MAX,6,INT_MAX,INT_MAX,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr,n);
    topView(root);
}