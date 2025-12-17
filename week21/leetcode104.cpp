// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  int dfs(TreeNode *node) {
    if (node == nullptr) return 0;

    return max(dfs(node->left), dfs(node->right)) + 1;
  }

  int maxDepth(TreeNode* root) {
    return dfs(root);
  }
};