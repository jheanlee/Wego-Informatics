#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;


int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int h = inf.readInt(1, 1000000, "h");
  inf.readSpace();
  int n = inf.readInt(2, 1000000, "n");

  inf.readEoln();

  int prev = -1e7;
  for (int i = 0; i < n; i++) {
    int curr = inf.readInt(1, 1000000, "ai");
    ensuref(prev <= curr, "provided no input is not increasing");
    prev = curr;

    if (i != n - 1) inf.readSpace();
  }

  inf.readEoln();

  prev = INT_MIN;
  int first; int last;
  for (int i = 0; i < n; i++) {
    int curr = inf.readInt(1, 1000000, "hi");
    ensuref(prev <= curr, "provided height input is not increasing");
    prev = curr;

    if (i == 0) first = curr;
    if (i == n - 1) last = curr;

    if (i != n - 1) inf.readSpace();
  }

  ensuref(first <= h && h <= last, "apartment height does not fit within provided range");
  inf.readEoln();
  inf.readEof();
}