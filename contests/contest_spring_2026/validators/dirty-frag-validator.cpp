//
// Created by Jhean Lee on 2026/6/2.
//
#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 1000, "n");
  inf.readEoln();
  for (int i = 0; i < n; i++) {
    std::string s = inf.readString();
    ensuref(s.size() > 0 && s.size() <= 100, "length");
  }
  inf.readEof();
}