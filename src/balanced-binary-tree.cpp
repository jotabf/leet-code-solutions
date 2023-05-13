#include <bits/stdc++.h>

using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
  bool balanced;

 public:
  int checkSize(TreeNode *root) {
    if (root == nullptr) return 0;

    int left_size = checkSize(root->left);
    int right_size = checkSize(root->right);

    if (abs(left_size - right_size) > 1) balanced = false;

    return max(left_size + 1, right_size + 1);
  }
  bool isBalanced(TreeNode *root) {
    balanced = true;
    checkSize(root);
    return balanced;
  }
};