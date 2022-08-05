#include<bits/stdc++.h>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
int ans = INT_MIN;
int h(TreeNode *root){
        if(!root) return 0;
        int lh = h(root->left);
        int rh = h(root->right);
        ans = max(ans, (lh+rh));
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        h(root);
        return ans;
}

// lca leetcode
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root == p || root == q) return root;
        TreeNode *left = lowestCommonAncestor(root->left, p,q);
        TreeNode *right = lowestCommonAncestor(root->right, p,q);
        if(left && right) return root;
        return left ? left : right;
}

int main(){

}