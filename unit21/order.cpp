#include <bits/stdc++.h>

using namespace std;

class BinaryTree {
public:
  int val;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int _val) {
    val = _val;
    left = nullptr;
    right = nullptr;
  }

  BinaryTree(int _val, BinaryTree *_left, BinaryTree *_right) {
    val = _val;
    left = _left;
    right = _right;
  }

  ~BinaryTree() {
    delete left;
    delete right;
  }
};

void preorder(BinaryTree *node) {
  if (node == nullptr) return;

  cout << node->val << ' ';
  preorder(node->left);
  preorder(node->right);
}

void inorder(BinaryTree *node) {
  if (node == nullptr) return;

  inorder(node->left);
  cout << node->val << ' ';
  inorder(node->right);
}

void postorder(BinaryTree *node) {
  if (node == nullptr) return;

  postorder(node->left);
  postorder(node->right);
  cout << node->val << ' ';
}

int main() {
  BinaryTree *root = new BinaryTree(
      0,
      new BinaryTree(
          1,
          new BinaryTree(
              3,
              new BinaryTree(7),
              new BinaryTree(8)
          ),
          new BinaryTree(4)
      ),
      new BinaryTree(
          2,
          new BinaryTree(
              5,
              nullptr,
              new BinaryTree(9)
          ),
          new BinaryTree(
              6,
              new BinaryTree(10),
              new BinaryTree(11)
          )
      )
  );

  cout << "preorder:  ";
  preorder(root);
  cout << '\n';

  cout << "inorder:   ";
  inorder(root);
  cout << '\n';

  cout << "postorder: ";
  postorder(root);
  cout << '\n';


  delete root;
  return 0;
}