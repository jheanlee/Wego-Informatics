#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(0, 100, "n");
  inf.readSpace();
  int m = inf.readInt(0, n, "m");
  inf.readSpace();
  int t = inf.readInt(0, n * (n - 1) / 2, "t");
  inf.readEoln();

  if (m > 0) {
    for (int i = 0; i < m; i++) {
      inf.readInt(1, n, "n_i");
      if (i != m - 1) inf.readSpace();
    }
    inf.readEoln();
  }

  if (t > 0) {
    for (int i = 0; i < t; i++) {
      inf.readInt(1, n, "u");
      inf.readSpace();
      inf.readInt(1, n, "v");
      inf.readEoln();
    }
  }

  inf.readEof();
}