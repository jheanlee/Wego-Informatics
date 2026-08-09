#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 20, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    inf.readString("[a-zA-z0-9!@#$%]{1,100}", "s");
  }

  inf.readEof();
}