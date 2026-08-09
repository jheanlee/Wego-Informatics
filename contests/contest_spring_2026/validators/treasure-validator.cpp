//
// Created by Jhean Lee on 2026/5/28.
//

#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 100, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      inf.readInt(0, 1000, "a_ij");
      inf.readSpace();
    }
    inf.readInt(0, 1000, "a_n-1n-1");
    inf.readEoln();
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      inf.readInt(0, 1000, "b_ij");
      inf.readSpace();
    }
    inf.readInt(0, 1000, "b_n-1n-1");
    inf.readEoln();
  }
  inf.readEof();
}