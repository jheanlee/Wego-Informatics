//
// Created by Jhean Lee on 2025/5/15.
//
#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 100, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    inf.readInt(1, 100, "l_i");
    inf.readSpace();
    inf.readInt(1, 100, "w_i");
    inf.readEoln();
  }
  inf.readEof();
}