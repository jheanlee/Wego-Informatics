// ReSharper disable CppMemberFunctionMayBeStatic
#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

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
  int minDepth(TreeNode* root) {
    if (root == nullptr) return 0;

    queue<pair<TreeNode *, int>> q;
    q.emplace(root, 0);

    while (!q.empty()) {
      pair<TreeNode *, int> p = q.front();
      q.pop();
      if (p.first == nullptr) continue;
      if (p.first->left == nullptr && p.first->right == nullptr) return p.second + 1;
      q.emplace(p.first->left, p.second + 1);
      q.emplace(p.first->right, p.second + 1);
    }

    return INT_MAX;
  }
};


#pragma clang diagnostic pop