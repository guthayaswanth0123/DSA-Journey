#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
int main(){
    TreeNode* root=new TreeNode(10);
    root->left= new TreeNode(20);
    root->right= new TreeNode(30);
    root->left->left=new TreeNode(5);
    root->left->right=new TreeNode(15);
    root->right->left=new TreeNode(25);
    root->right->right=new TreeNode(35);
    cout<<root->data;
}
