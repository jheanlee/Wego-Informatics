//
// Created by Jhean Lee on 2025/5/29.
//
#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char *argv[]) {
  registerValidation(argc, argv);
  inf.readInt(1, 100, "n");
  inf.readSpace();
  int m = inf.readInt(1, 10000, "m");
  inf.readEoln();
  inf.readInt(1, m, "k");
  inf.readEoln();
  inf.readInt(1, 100, "x");
  inf.readSpace();
  inf.readInt(1, 10000, "y");
  inf.readEoln();
  inf.readEof();
}