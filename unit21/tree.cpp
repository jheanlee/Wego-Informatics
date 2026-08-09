#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "google-explicit-constructor"
#pragma ide diagnostic ignored "OCUnusedStructInspection"


#include <bits/stdc++.h>

using namespace std;

class Tree {
public:
  int val;
  vector<Tree *> children;

  Tree(int _val) {
    val = _val;
    children = vector<Tree *>();
  }
};

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
};

#pragma clang diagnostic pop