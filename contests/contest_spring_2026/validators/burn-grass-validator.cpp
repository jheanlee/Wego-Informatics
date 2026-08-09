//
// Created by Jhean Lee on 2026/5/16.
//

#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 20, "n");
  inf.readSpace();
  int m = inf.readInt(1, 20, "m");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c = inf.readChar();
      ensuref(c == '.' || c == 'w' || c == 't', "Grid contents must be '.', 'w' or 't'. Found: %c", c);
    }
    inf.readEoln();
  }
  inf.readEof();
}