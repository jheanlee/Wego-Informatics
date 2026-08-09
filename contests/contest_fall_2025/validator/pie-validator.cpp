#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(0, 100, "n");
  inf.readEoln();

  for (int i = 0; i < n; i++) {
    inf.readInt(1, 10000, "a_i");
    if (i != n - 1) {
      inf.readSpace();
    }
  }
  if (n > 0) inf.readEoln();

  for (int i = 0; i < n; i++) {
    inf.readInt(1, 10000, "b_i");
    if (i != n - 1) {
      inf.readSpace();
    }
  }
  if (n > 0) inf.readEoln();

  inf.readEof();
}