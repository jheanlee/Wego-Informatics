#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);

  int n = inf.readInt(1, 8, "n");
  inf.readEoln();

  for (int i = 0; i < n; i++) {
    inf.readString("[a-z]{5,5}", "str");
  }

  inf.readEof();
}