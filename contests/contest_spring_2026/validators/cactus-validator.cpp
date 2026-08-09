//
// Created by Jhean Lee on 2026/5/27.
//
#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int k = inf.readInt(1, 100, "k");
  inf.readEoln();
  for (int i = 1; i < k; i++) {
    inf.readInt(0, 2, "a_i");
    inf.readSpace();
  }
  inf.readInt(0, 2, "a_k");
  inf.readEoln();
  inf.readEof();
}