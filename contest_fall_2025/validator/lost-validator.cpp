#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(2, 8, "n");
  inf.readEoln();
  int i_0 = inf.readInt(0, n, "i_0");
  inf.readSpace();
  int j_0 = inf.readInt(0, n, "j_0");
  inf.readSpace();
  int i_1 = inf.readInt(0, n, "i_1");
  inf.readSpace();
  int j_1 = inf.readInt(0, n, "j_1");
  inf.readEoln();
  ensuref(i_0 != i_1 || j_0 != j_1, "(i_0, j_0) should not be identical to (i_1, j_1)");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      int val = inf.readInt(0, 1, "m[i][j]");
      if ((i == i_0 && j == j_0) || (i == i_1 && j == j_1)) {
        ensuref(val == 1, "the location of a person must be 1");
      }
      inf.readSpace();
    }
    int val = inf.readInt(0, 1, "m[i][j]");
    if ((i == i_0 && n - 1 == j_0) || (i == i_1 && n - 1 == j_1)) {
      ensuref(val == 1, "the location of a person must be 1");
    }
    inf.readEoln();
  }
  inf.readEof();
}