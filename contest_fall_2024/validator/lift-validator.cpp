#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

unsigned int hash_lift(int begin, int end) {
  return (begin * 100'000 + end);
}

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);

  int n = inf.readInt(2, 1'000, "n");
  inf.readSpace();
  int m = inf.readInt(0, n * (n - 1) / 2, "m");
  inf.readEoln();

  unordered_set<unsigned int> lifts;

  for (int i = 0; i < m; i++) {
    int begin = inf.readInt(1, n - 1, "f_i1");
    inf.readSpace();
    int end = inf.readInt(begin + 1, n, "f_i2");
    ensuref(lifts.find(hash_lift(begin, end)) == lifts.end(), "lift already exists");
    lifts.emplace(hash_lift(begin, end));
    inf.readEoln();
  }

  inf.readEof();
}