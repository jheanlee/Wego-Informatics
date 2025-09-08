//
// Created by Jhean Lee on 2025/6/4.
//
#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 1000, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    inf.readInt(0, 100, "a_i");
    inf.readSpace();
    inf.readInt(0, 100, "b_i");
    inf.readSpace();
    inf.readInt(0, 100, "c_i");
    inf.readEoln();
  }
  inf.readEof();
}