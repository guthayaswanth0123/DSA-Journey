#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(root == NULL)
        return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++) {
            TreeNode* temp = q.front();
            q.pop();
            level.push_back(temp->data);
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
    TreeNode* root=new TreeNode(10);
    root->left= new TreeNode(20);
    root->right= new TreeNode(30);
    root->left->left=new TreeNode(5);
    root->left->right=new TreeNode(15);
    root->right->left=new TreeNode(25);
    root->right->right=new TreeNode(35);
    vector<vector<int>> result = levelOrder(root);
    for(auto level : result) {
        for(auto x : level)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}